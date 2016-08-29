//IN THE NAME OF ALLAH
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

string v[1005];

int main(){
	int n,findex=0,index=1,m; cin >> n,m=n;
	bool yes = false;
	while (n--){
		cin >> v[index++];
		if (v[index - 1][0] == 'O'&&v[index - 1][1] == 'O'&&!yes){
			v[index - 1][0] = '+';
			v[index - 1][1] = '+';
			yes = true;
		}
		if (v[index - 1][3] == 'O'&&v[index - 1][4] == 'O'&&!yes){
			v[index - 1][3] = '+';
			v[index - 1][4] = '+';
			yes = true;
		}
	}
	if (yes) cout << "YES\n";
	else cout << "NO\n";
	for (int i = 1; i <= m&&yes; i++){
		cout << v[i] << endl;
	}
	return 0;
}
