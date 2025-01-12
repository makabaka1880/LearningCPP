#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) sum += i;
    }
    cout << sum;
    return 0;
}