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

int arr[100005];

int main(){
	int n,cnt=0; cin >> n, arr[0] = 0;
	bool hs = true;
	for (int i = 1; i <= n; i++){
		cin >> arr[i];
		if (arr[i] < arr[i - 1]&&hs){
			cnt++;
			if (arr[i] > arr[1]) hs = false;
			while (++i <= n){
				cin >> arr[i];
				if (arr[i] >= arr[i - 1]&&arr[i]<=arr[1])
					cnt++;
				else{
					hs = false;
					break;
				}
			}
		}
	}
	if (hs) cout << cnt << endl;
	else cout << -1 << endl;
	return 0;
}
