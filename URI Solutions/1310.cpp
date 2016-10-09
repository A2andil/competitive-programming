//IN THE NAME OF ALLAH
#include<algorithm>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<map>
#include<set>
#define Pi  3.14159265358979323846
#define Mod 1000000007
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
#define vi  vector<ll>
#define pb  push_back
#define ll  long long 
#define S   second
#define F   first
using namespace std;

int a[55];

int main(){
	ios::sync_with_stdio(false);
	ll n, cst, mx, cur;
	while (cin >> n&&n){
		cin >> cst, cur = 0, mx = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			cur += a[i] - cst;
			if (cur < 0) cur = 0;
			else if (cur > mx) mx = cur;
		}
		cout << mx << endl;
	}
	return 0;
}
