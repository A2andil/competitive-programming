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
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s.size() == 3) {
			if (s.substr(0, 2) == "OB") {
				cout << "OBI";
			}
			else if (s.substr(0, 2) == "UR") {
				cout << "URI";
			}
			else {
				cout << s;
			}
		}
		else cout << s;
		cout << (i == n - 1 ? '\n' : ' ');
	}
	return 0;
}