//in the name of allah

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
vector<ll> a, c;

int binary_search(int index, ll x) {
    ll lw = index, hi = c.size() - 1, md, ans = -1;
    while (lw <= hi) {
        md = lw + (hi - lw) / 2;
        if (c[md] >= x) {
            ans = md;
            hi = md - 1;
        }
        else lw = md + 1;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    ll n, rs = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        ll in; cin >> in;
        a.push_back(in);
    }
    for (int i = 0; i < n; i++) {
        ll in; cin >> in;
        c.push_back(a[i] - in);
    }
    sort(c.begin(), c.end());

    for (int i = 0; i < n - 1; i++) {
        if (c[i] <= 0) {
            ll sub = binary_search(i + 1, abs(c[i]) + 1);
            if (sub != -1) rs += n - sub;
        }
        else rs += n - 1 - i;
    }
    cout << rs << endl;
    return 0;
}
