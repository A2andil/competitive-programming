//in the name of allah

#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;

#define PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        double angle = 360.0 / (4.0 * n);
        angle = PI * angle / 180;
        double ans = 0.5 / tan(angle) * 2;
        cout << setprecision(10) << ans << endl;
    }
    return 0;
}
