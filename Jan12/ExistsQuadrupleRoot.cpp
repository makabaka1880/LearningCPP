#include <iostream>
using namespace std;

int quadrupleRoot(int a) {
    if (a <= 0) {
        return -1;
    }
    for (int i = 1; i * i * i * i <= a; i++) {
        if (i * i * i * i == a) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < a; i++) {
        cout << quadrupleRoot(n[i]) << endl;
    }
}