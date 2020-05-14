//in the name of allah

#include <iostream>
#include <algorithm>
#include <map>

typedef long long ll;
using namespace std;

map<int, ll> mp;

int main() {
    ios_base::sync_with_stdio(0);
    ll n, ans = 0, b; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        mp[i - b] += b;
    }
    for (auto t : mp) ans = max(ans, t.second);
    cout << ans << endl;
    return 0;
}
