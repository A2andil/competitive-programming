//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
 
typedef long long ll;
using namespace std;
 
int lst[3 * 100001];
vector<int> delta;
 
 
int main() {
    ios_base::sync_with_stdio(0);
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> lst[i];
    int ans = lst[n - 1] - lst[0];
    for (int i = 1; i < n; i++) delta.push_back(lst[i] - lst[i - 1]);
    sort(delta.rbegin(), delta.rend());
    for (int j = 0; j < k - 1; j++) ans -= delta[j];
    cout << ans << endl;
    return 0;
}
