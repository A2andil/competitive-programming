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

int main() {
    ios::sync_with_stdio(0), cin.tie();
    int n, a, ans; cin >> n >> a;
    a = a%2?a:n+1-a;
    ans = 1+a/2;
    cout << ans << endl;
    return 0;
}
