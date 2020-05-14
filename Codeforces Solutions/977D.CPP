//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
vector<ll> lst(100);
 
int d3(ll x) {
    int ans = 0;
    while (x >= 3 && x % 3 == 0) ans += 1, x /= 3;
    return ans;
}
 
bool cmp(ll a, ll b) {
    return d3(a) > d3(b) || (d3(a) == d3(b) && a < b);
}
 
int main() {
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> lst[i];
    sort(lst.begin(), lst.begin() + n, cmp);
    for (int i = 0; i < n; i++) cout << lst[i] << (i == n - 1? "\n" : " ");
    return 0;
}
