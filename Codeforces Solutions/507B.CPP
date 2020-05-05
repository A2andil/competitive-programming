//in the name of allah

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll pow2(ll x) {
    return x*x;
}

int main() {
    ll r, x1, x2, y1, y2, ans; cin >> r >> x1 >> y1 >> x2 >> y2;
    double dist = pow2(x1 - x2) + pow2(y1 - y2);
    dist = sqrt(dist) - 2 * r;
    if (x1 == x2 && y1 == y2) {
        cout << 0 << endl;
        return 0;
    }
    int n = dist / (2*r);
    if (n * 2 * r < dist) n++;
    cout << n + 1 << endl;
    return 0;
}
