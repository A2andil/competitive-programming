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
	int tc; cin >> tc;
	while (tc--) {
		int n, rs = 0; cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				for (int j = i + 1; j < n; j++) {
					if (a[i] == b[j]) {
						int indx = j;
						while (indx > i) {
							swap(b[indx], b[indx - 1]);
							indx--, rs++;
						}
						break;
					}
				}
			}
		}
		cout << "Optimal train swapping takes " << rs << " swaps." << endl;
	}
	return 0;
}