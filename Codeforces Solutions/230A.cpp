//IN THE NAME OF ALLAH
#include<algorithm>
#include<iostream>
#include <cstring>
#include <cstdio>
#include<cmath>
#include<map>
#define ll long long

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	pair<int, int> arr[1005];
	int s, n; cin >> s >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++){
		if (s <= arr[i].first){
			cout << "NO\n";
			return 0;
		}
		s += arr[i].second;
	}
	cout << "YES\n";
}
