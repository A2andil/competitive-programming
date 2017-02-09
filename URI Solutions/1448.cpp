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
	int tc, x, y; cin >> tc;
	string s, a, b;
	getline(cin, s);
	for (int n = 1; n <= tc; n++) {
		x = y = 0;
		getline(cin, s), getline(cin, a),getline(cin, b);
		cout << "Instancia " << n << endl;
		for (int i = 0; i < s.size(); i++) {
			if (a[i] == s[i]) x++;
			if (b[i] == s[i]) y++;
		}
		if (x > y) cout << "time 1" << endl;
		else if (y > x) cout << "time 2" << endl;
		else {
			for (int i = 0; i < s.size(); i++) {
				if (a[i] == s[i] && b[i] != s[i]) {
					cout << "time 1" << endl;
					break;
				}
				else if (b[i] == s[i] && a[i] != s[i]) {
					cout << "time 2" << endl;
					break;
				}
				if (i == s.size() - 1) cout << "empate" << endl;
			}
		}
		cout << endl;
	}
	return 0;
}