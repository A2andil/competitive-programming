//IN THE NAME OF ALLAH
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#define ll long long
#define ui unsigned int
#define db double
#define fl float
using namespace std;

int const N = 10e6 + 10;
bool v[N];

void init() {
	v[0] = v[1] = true;
	for (int i = 2; i < N; ++i)
	if (!v[i]) {
		for (int j = i << 1; j < N; j += i)
			v[j] = true;
	}
}

int main(){
	init();
	int n;
	ll x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		ll y = (int)sqrt(x);
		cout << (!v[y] && y*y == x ? "YES" : "NO") << endl;
	}
	return 0;
}
