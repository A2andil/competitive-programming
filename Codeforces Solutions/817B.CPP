//in the name of God

#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <iostream>

#define all(v)              v.begin(), v.end()
#define min3(a, b, c)       min(a, min(b, c))
#define max3(a, b, c)       max(a, max(b, c))
#define pi                  3.14159265358979323846
#define sz(x)               x.size()
#define pb                  push_back
#define ll                  long long
#define mk                  make_pair
#define oo                  (int)1e9 + 7
#define ln                  "\n"

inline ll Max(ll a, ll b) { return a > b ? a : b; }
inline ll Min(ll a, ll b) { return a > b ? b : a; }

using namespace std;

const int mx = (int)1e5+5;
vector<int> lst, s_lst;
int cnta[mx], cntb[mx], cntc[mx];

int main() {
    ios::sync_with_stdio(0), cin.tie();
    ll n, b = 0, c = 0, ans = 0, idx = 2; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        lst.push_back(x), s_lst.push_back(x);
    }
    sort(s_lst.begin(), s_lst.end());
    while(idx < n && s_lst[2] == s_lst[idx]) {
        idx++;
    }
    for (int i = idx - 1; i > -1; i--) {
        ans = s_lst[0] == s_lst[i]?ans+b:ans;
        b = s_lst[1] == s_lst[i]?b+c:b;
        c = s_lst[2] == s_lst[i]?c+1:c;
    }
    cout << ans << endl;
    return 0;
}
