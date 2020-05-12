//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
 
typedef long long ll;
using namespace std;
 
const int MAX = 100005;
ll dp[MAX][2], a[MAX], b[MAX];
 
int main(){
    ios_base::sync_with_stdio(0);
    int n; cin >> n; dp[0][0] = dp[0][1] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][0], a[i] + dp[i - 1][1]);
        dp[i][1] = max(dp[i - 1][1], b[i] + dp[i - 1][0]);
        //cout << dp[i][0] << " " << dp[i][1] << endl;
    }
    cout << max(dp[n][0], dp[n][1]) << endl;
    return 0;
}
