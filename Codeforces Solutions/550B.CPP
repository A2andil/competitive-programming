//in the name of allah

#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>

typedef long long ll;
using namespace std;

int n, l, r, x, ans = 0, mn, mx, a[16];

void solve(int idx, int sm, int lvl, int mn, int mx, int tk) {
    if (sm >= l && sm <= r && lvl > 1 && mx - mn >= x && tk) {
        ans += 1;
    }
    if (idx >= n - 1 || sm > r) return;
    solve(idx + 1, sm + a[idx + 1], lvl + 1
          , min(mn, a[idx + 1]), max(mx, a[idx + 1]), 1);
    solve(idx + 1, sm, lvl, mn, mx, 0);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        solve(i, a[i], 1, a[i], a[i], 1);
    }
    cout << ans << endl;
    return 0;
}
