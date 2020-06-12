#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid) {
    //your logic here
    int center = n / 2, r = 0, c = 0;
    if (grid[0][0] == 'p' || grid[0][n - 1] == 'p') {
        r = 0, c = grid[0][0] == 'p' ? 0 : n - 1;
    }
    else {
        r = n - 1, c = grid[n - 1][0] == 'p' ? 0 : n - 1;
    }
    int x = r - center, y = c - center;
    string ans = x < 0 ? "UP" : "DOWN"; x = abs(x);
    while (x > 0) {
        cout << ans << endl;
        x -= 1;
    }
    ans = y < 0 ? "LEFT" : "RIGHT"; y = abs(y);
    while (y > 0) {
        cout << ans << endl;
        y -= 1;
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m, grid);

    return 0;
}