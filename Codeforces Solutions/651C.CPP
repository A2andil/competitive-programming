//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <map>
 
typedef long long ll;
using namespace std;
 
map<int, ll> mx, my;
map<pair<int, int>, ll> rep;
 
int main() {
    ios_base::sync_with_stdio(0);
    ll n, x, y, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        mx[x] += 1, my[y] += 1;
        rep[{x, y}] += 1;
    }
    for (auto t : mx) ans += (t.second - 1) * t.second / 2;
    for (auto t : my) ans += (t.second - 1) * t.second / 2;
    for (auto t : rep) ans -= (t.second - 1) * t.second / 2;
    cout << ans << endl;
    return 0;
}
