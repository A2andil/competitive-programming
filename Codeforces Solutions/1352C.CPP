//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        ll n, k;  cin >> n >> k;
        ll lo = 1, md, hi = (ll)1e18, ans = -1, tm;
        while (lo <= hi) {
            md = lo + (hi - lo) / 2, tm = md / n;
            if (md - tm >= k) {
                ans = md;
                hi = md - 1;
            }
            else lo = md + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
