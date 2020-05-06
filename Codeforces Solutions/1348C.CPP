//in the name of allah

#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, count = 0; cin >> n >> k;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            s.insert(x);
        }
        if (k < s.size())
            cout << -1 << endl;
        else {
           vector<int> ans;
           for (int i : s) ans.push_back(i);
           for (int i = 0; i < k - s.size(); i++) ans.push_back(1);
           cout << n * ans.size() << endl;
           for (int j = 0; j < n; j++) {
               for (int i = 0; i < ans.size(); i++) {
                   cout << ans[i] << " ";
               }
           }
           cout << endl;
        }
    }
}
