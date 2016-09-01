//IN THE NAME OF ALLAH
#include<algorithm>
#include<iostream>
#include <cstring>
#include <cstdio>
#include<cmath>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n, k,cnt=0,s; cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> s;
		if (5 - s >= k) cnt++;
	}
	cout << cnt / 3 << endl;

	return 0;
}
