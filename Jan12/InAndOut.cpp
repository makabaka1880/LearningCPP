#include <iostream>
using namespace std;

void analytical() {
    double tI, tO;
    cin >> tI >> tO;
    double dI = 1/tI;
    double dO = 1/tO;
    cout << dI << " " << dO << "\n" << 1/(dI - dO);
}

void numerical() {
    double tI, tO;
    cin >> tI >> tO;
    double water = 0;
    double precision = 100;
    double dt = 1 / precision;
    double counter = 0;
    double dI = 1 / tI;
    double dO = 1 / tO;
    while (!(water > 1)) {
        counter += 1;
        water += dI * dt;
        water -= dO * dt;
        cout << "Round " << counter << " Second " << counter * dt << " Water " << water << endl;
    }
    counter -= 1;
    cout << counter * dt << endl;
}

int main() {
    analytical();
    numerical();
    return 0;
}