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
	ll tc; cin >> tc;
	string x; getline(cin, x);
	while (tc--) {
		map<char, int> mp;
		getline(cin, x);
		for (int i = 0; i < x.size(); i++) {
			if (x[i] == ' ' || x[i] == ',') continue;
			mp[x[i]]++;
		}
		if (mp.size() == 26) cout << "frase completa" << endl;
		else if (mp.size() >= 13) cout << "frase quase completa" << endl;
		else cout << "frase mal elaborada" << endl;
	}
	return 0;
}