#include <iostream>
using namespace std;

bool prime(int number) {
	if (number < 2) return false;
	for (int i = 2; i <= number - 1; i++) {
		if (number % i == 0) return false;
	}
	return true;
}

int main() {
	int upper;
	cin >> upper;
	int sumn = 0;
	for (int k = 2; k <= upper; k++) {
		if (prime(k)) {
			cout << k << endl;
			sumn += k;
		}
	}
	cout << sumn;
}
