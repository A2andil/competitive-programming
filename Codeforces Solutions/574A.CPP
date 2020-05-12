//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
 
typedef long long ll;
using namespace std;
 
int seats[1010];
 
int main(){
    ios_base::sync_with_stdio(0);
    int n, k, ns, ans = 0; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        seats[x]++;
    }
    ns = n / 2 + n % 2;
    for (int j = 1; j <= k; j++) ans += (seats[j] / 2) * 2;
    ans = ans + (ns - ans / 2);
    cout << ans << endl;
    return 0;
}
