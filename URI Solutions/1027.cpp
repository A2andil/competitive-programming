//in the name of God

#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
#include <map>
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
#define mp                  make_pair
#define oo                  (int)1e9 + 7
#define ln                  "\n"

using namespace std;

const int N = 1005;
int dp[N];

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.first < b.first)
		return true;
	return false;
}

int lis(vector<pair<int, int>> points, int n, int y) {
	int mx = 1, need;
	for (int i = 0; i < n; i++)
		dp[i] = 1;
	for (int i = 1; i < n; i++) {
		if (points[i].second == y + 1) need = y - 1;
		else if (points[i].second == y - 1) need = y + 1;
		else continue;
		for (int j = 0; j < i; j++) {
			if (points[i].first > points[j].first &&
				points[j].second == need && dp[j] + 1 > dp[i])
				dp[i] = dp[j] + 1;
		}
		mx = max(mx, dp[i]);
	}
	return mx;
}

int main() {
	ios::sync_with_stdio(false);
	int n;
	while (cin >> n){
		int mx = -1000, mn = 1000, rs = 1;
		vector< pair<int, int>> points;
		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			mn = min(mn, y), mx = max(mx, y);
			points.pb(mp(x, y));
		}
		sort(all(points), cmp);
		for (int i = mn + 1; i < mx; i++) {
			rs = max(lis(points, n, i), rs);
		}
		cout << rs << endl;
	}
	return 0;
}
