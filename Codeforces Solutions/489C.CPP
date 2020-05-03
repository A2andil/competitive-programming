//in the name of allah

#include <iostream>
using namespace std;

int main() {
    int m, n, test = 0;
    while(cin >> m >> n) {
        char mx[100], sm[100];

        for (int j = 0; j < 100; j++)
            mx[j] = sm[j] = char(48);

        for (int i = 0, cop = n; i < m; i++) {
            for (int j = 9; j >= 0; j--)
                if (cop >= j) {
                    mx[i] = char(j + mx[i]); cop -= j;
                    break;
                }
            test += mx[i] - 48;
        }

        sm[0] = n > 0? '1' : '0';
        for (int i = m - 1, cop = n - 1; i >= 0; i--) {
            for (int j = 9; j >= 0; j--)
                if (cop >= j) {
                    sm[i] = char(j + sm[i]); cop -= j;
                    break;
                }
            test += sm[i] - 48;
        }

        if ((m > 1 && !n) || test != 2 * n) {
            cout << -1 << " " << -1 << endl;
            return 0;
        }
        string lg = "", ls = "";
        for (int i = 0; i < m; i++) {
            lg += mx[i]; ls += sm[i];
        }
        cout << ls << " " << lg << endl;
        test = 0;
    }
    return 0;
}
