//in the name of allah

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> va, vb;

int main() {
    int t, a, b, c, d; cin >> t;
    while (t --) {
        cin >> a >> b;
        va.push_back(a), va.push_back(b);
        sort(va.begin(), va.end());
        cin >> a >> b;
        vb.push_back(a), vb.push_back(b);
        sort(vb.begin(), vb.end());
        if (va[0] + vb[0] == vb[1] && va[1] == vb[1]) {
            cout << "YES" << endl;
        }
        else cout << "No" << endl;
        va.clear(), vb.clear();
    }
    return 0;
}
