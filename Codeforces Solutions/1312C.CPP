//in the name of allah

#include <iostream>
#include <vector>
#include <map>
#include <set>

typedef long long ll;
using namespace std;

ll pw[64], MAXN = (ll)1e16;

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        ll n, k, idx = 0, cnt = 0; cin >> n >> k;
        vector<ll> lst(n);
        for (int i = 0; i < n; i++) cin >> lst[i];
        pw[0] = 1;
        while (pw[idx] < MAXN) {
            idx += 1;
            pw[idx] = pw[idx - 1] * k;
        }
        for (int i = 0; i < n; i++) {
            ll x  = lst[i];
            for (int j = idx ; j >= 0; j--) {
                if (pw[j] <= x) {
                    x -= pw[j], pw[j] = MAXN + 100;
                }
            }
            lst[i] = x;
        }
        for (int i = 0; i < n; i++) if (lst[i] == 0) cnt++;
        if (cnt == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
