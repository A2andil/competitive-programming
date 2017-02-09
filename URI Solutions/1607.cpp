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
	ll rs, tc; cin >> tc;
	while (tc--) {
		rs = 0;
		string x, y; cin >> x >> y;
		for (int i = 0; i < x.size(); ++i) {
			if (y[i] > x[i]) {
				rs += y[i] - x[i];
			}
			else if (x[i] > y[i]) {
				rs += 'z' - x[i] + y[i] - 'a' + 1;
			}
		}
		cout << rs << endl;
	}
	return 0;
}