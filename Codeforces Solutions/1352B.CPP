//in the name of allah

#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;
using namespace std;

vector<int> ans, odd, even;

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int rem = n % k, d = n / k;
        if (n < k) cout << "NO" << endl;
        else {
            for (int i = 0; i < k; i++) {
                if (rem) ans.push_back(d + 1), rem -= 1;
                else ans.push_back(d);
                if (ans[i] % 2 == 0) even.push_back(ans[i]);
                else odd.push_back(ans[i]);
            }
            if (even.size() == k || odd.size() == k);
            else if (odd.size() % 2 == 0 && odd.size() && odd[0] >= 3) {
                ans.clear();
                for (int i = 0; i < even.size(); i++) ans.push_back(even[i]);
                for (int i = 0; i < odd.size(); i++)
                    ans.push_back(odd[i] + (i % 2 == 0? 1 : -1));
            }
            else if (even.size() % 2 == 0 && even.size()) {
                ans.clear();
                for (int i = 0; i < odd.size(); i++) ans.push_back(odd[i]);
                for (int i = 0; i < even.size(); i++)
                    ans.push_back(even[i] + (i % 2 == 0? 1 : -1));
            }
            else {
                cout << "NO" << endl;
                ans.clear(), odd.clear(), even.clear();
                continue;
            }
            cout << "YES" << endl;
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << (i == ans.size() - 1? "\n" : " ");
            ans.clear(), odd.clear(), even.clear();
        }
    }
    return 0;
}
