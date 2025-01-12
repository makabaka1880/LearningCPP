#include <iostream>
using namespace std;

double analytical(double a, double b, double h) {
    return (a + b) * h / 2;
}

double lerp(double n, double m, double i) {
    return n + (m - n) * i;
}

double numerical(double a, double b, double h) {
    double precision = 100;
    double dx = 1 / precision;
    int counter = 0;
    double area = 0;

    while (counter * dx < h) {
        area += lerp(a, b, counter / h * dx) * dx;
        cout << "Round " << counter << " progress " << counter * dx << " Area " << area << endl;
        counter += 1;
    }
    return area;
}

int main() {
    double a, b, h;
    cin >> a >> b >> h;
    double num = numerical(a, b, h);
    double analy = analytical(a, b, h);
    cout << "Numerical: " << num << endl;
    cout << "Analytical: " << analy << endl;
    return 0;
}