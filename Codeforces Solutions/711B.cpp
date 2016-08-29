//IN THE NAME OF ALLAH
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll arr[505][505], row[505] = { 0 }, col[505]={0};

int main(){
	bool ch = true,ch1=true;
	int n,x=0,y=0; cin >> n;
	ll nonzer = 0, zero = 0,rs;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> arr[i][j];
			if (arr[i][j] == 0){
				x = i, y = j;
			}
		}
		if (x&&y&&ch){
			for (int z = 1; z <= n; z++){
				zero += arr[i][z];
			}
			ch = false;
		}
		else if (ch1){
			for (int z = 1; z <= n; z++){
				nonzer += arr[i][z];
			}
			ch1 = false;
		}
	}
	rs = nonzer - zero;
	arr[x][y] = rs;
	//cout << nonzer << endl;
	ll cnt = 0;
	//test rows
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			row[i] += arr[i][j];
		}
		if (row[i] == nonzer) cnt++;
	}
	//test cols
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			col[j] += arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		if (col[i] == nonzer) cnt++;
	}
	//test diagonals
	ll d1 = 0, d2 = 0, ind1=1,ind2 = 1;
	while (ind1 <= n){
		d1 += arr[ind1++][ind2++];
	}
	if (d1 == nonzer) cnt++;
	ind1 = 1, ind2 = n;
	while (ind1 <= n){
		d2 += arr[ind1++][ind2--];
	}
	if (d2 == nonzer) cnt++;
	if (n == 1) cout << 1 << endl;
	else if (cnt == 2 * n + 2 && rs > 0) cout << rs << endl;
	else cout << -1 << endl;
	return 0;
}
