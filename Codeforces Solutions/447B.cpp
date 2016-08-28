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

int main(){
	string v; cin >> v;
	int mx=0, cnt[26], rs = 0, k; cin >> k;
	for (int i = 0; i < 26; i++){
		cin >> cnt[i];
		if (mx < cnt[i]) mx = cnt[i];
	}
	for (int i = 0; i < v.length(); i++){
		rs += cnt[v[i] - 97] * (i + 1);
	}
	for (int i = v.length() + 1; i <= v.length() + k; i++){
		rs += i*mx;
	}
	cout << rs << endl;
	return 0;
}
