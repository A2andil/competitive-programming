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
	int tc; cin >> tc;
	while (tc--) {
		int x, y; cin >> x >> y;
		string s = "", rs;
		for (int i = x; i <= y; i++) {
			s += to_string(i);
		}
		rs = s;
		for (int i = s.size() - 1; i > -1; i--) {
			rs += s[i];
		}
		cout << rs << endl;
	}
	return 0;
}