#include <iostream>
using namespace std;

void f(int n[]) {
	int maxn = n[0];
	for (int i = 1; i <= 9; i++) {
		if (maxn < n[i]) maxn = n[i];
	}
	cout << maxn << endl;
} 

int main() {
	int a[10] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < 10; j++) {
			cin >> a[j];
		}
		f(a);
	}
	return 0;
} 

