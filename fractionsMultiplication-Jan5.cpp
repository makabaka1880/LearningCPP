#include <iostream>

using namespace std;

float term(float min) {
	return 1/(min * (min + 1));
}

int main() {
	int num;
	cin >> num;
	float sumn = 0;
	for (int i = 1; i <= num; i++) {
//		cout << term(i);
cout << i << endl;
		sumn += term(i);
	}
	cout << sumn;
	return 0;
}
