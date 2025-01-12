#include <iostream>
using namespace std;

double div(double a, double b) {
	return a / b;
}

int main() {
	int a, b;
	char sym;
	while (true) {
		cin >> a >> sym >> b;
		if (sym == '+') {
			cout << a + b;
		} else if (sym == '-') {
			cout << a - b;
		} else if (sym == '*') {
			cout << a * b;
		} else if (sym == '/') {
			cout << div(a, b);
		} else if (sym == '%') {
			cout << a % b;
		}
		cout << endl;
	}
	return 0;
}

