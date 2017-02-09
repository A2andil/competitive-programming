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
	ll tc, k; cin >> tc;
	while (tc--) {
		map<string, int> mp;
		cin >> k;
		string x;
		for (int i = 0; i < k; i++) {
			cin >> x;
			mp[x]++;
		}
		if (mp.size() == 1) {
			cout << x << endl;
		}
		else cout << "ingles" << endl;
	}
	return 0;
}