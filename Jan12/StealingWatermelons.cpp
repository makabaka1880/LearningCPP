#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, n = 0;
    cin >> s >> n;
    vector< vector<bool> > grid(s, vector<bool>(s, false));
    int posx[s], posy[s];

    for (int i = 0; i < n; i++) {
        cin >> posx[i] >> posy[i];
    }

    for (int i = 0; i < n; i++) {
        int x = posx[i] - 1;
        int y = posy[i] - 1;
        grid[x][y] = true;
        grid[x + 1][y] = true;
        grid[x][y + 1] = true;
        grid[x + 1][y + 1] = true;
    }

    int falseCount = 0;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (!grid[i][j]) {
                falseCount++;
            }
        }
    }
    cout << falseCount << endl;
    return 0;
}
