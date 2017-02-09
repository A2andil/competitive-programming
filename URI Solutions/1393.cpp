//in the name of God

#include <algorithm>
#include <cmath>
#include <iostream>

#define ll long long
using namespace std;

const int sz = 41;
ll dp[sz];

int main() {
	int n, i;
	dp[0] = 1, dp[1] = 1;
	for (i = 2; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	while (cin >> n && n) {
		cout << dp[n] << endl;
	}
	return 0;
}
