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
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
#define vi  vector<ll>
#define pb  push_back
#define ll  long long 
#define S   second
#define F   first
using namespace std;

int a[26], j;

int main(){
	ios::sync_with_stdio(false);
	string v, rs;
	while (getline(cin, v)){
		rs = "";
		memset(a, 0, 26 * sizeof(int));
		for (int i = 0; i < v.size(); i++){
			a[v[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++){
			if (a[i]>0){
				rs += (i + 'a'), j = i;
				while (j < 26 && a[j] > 0) j++;
				rs += ":", rs += (j - 1 + 'a'), rs += ", ";
				i = j;
			}
		}
		if (rs.size() > 3) rs = rs.substr(0, rs.size() - 2);
		cout << rs << endl;
	}
	return 0;
}
