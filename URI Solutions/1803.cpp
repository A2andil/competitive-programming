//in the name of God

#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <iostream>

#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string grid[4], rs = "";
	ll f = 0, l = 0, m, mod = 257;
	for (int i = 0; i < 4; i++) {
		cin >> grid[i];
		f = f * 10 + (grid[i][0] - 48);
		l = l * 10 + (grid[i][grid[0].size() - 1] - 48);
	}
	for (int i = 1; i + 1 < grid[0].size(); i++) {
		m = 0;
		for (int j = 0; j < 4; j++) {
			m = m * 10 + grid[j][i] - 48;
		}
		char c = (f * m + l) % mod;
		rs += c;
	}
	cout << rs << endl;
	return 0;
}