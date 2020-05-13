//in the name of allah

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

typedef long long ll;
using namespace std;

vector<ll> lst;

int main(){
    ios_base::sync_with_stdio(0);
    ll n, k, i; cin >> n >> k;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0) lst.push_back(i), lst.push_back(n / i);
    }
    if (i * i == n) lst.push_back(i);
    if (k > lst.size()) cout << -1 << endl;
    else {
        sort(lst.begin(), lst.end());
        cout << lst[k - 1] << endl;
    }
    return 0;
}
