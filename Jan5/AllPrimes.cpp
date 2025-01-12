#include <iostream>
using namespace std;

bool prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int upper;
	int lower;
	cin >> lower >> upper;
	bool empty = true;
	for (int n = lower; n + 2 <= upper; n++) {
		if (prime(n) && prime(n + 2)) {cout << n << " " << n+2 << endl; empty = false;}
	}
	if (empty) cout << "empty";
}
