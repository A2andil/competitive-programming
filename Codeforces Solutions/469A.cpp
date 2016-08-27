//IN THE NAME OF ALLAH
#include<iostream>
using namespace std;

int main(){
	int cnt[105] = { 0 }, n,a,b; cin >> n;
	cin >> a;
	while (a--){
		cin >> b;
		cnt[b] = 1;
	}
	cin >> a;
	while (a--){
		cin >> b;
		cnt[b] = 1;
	}
	int c = 0;
	for (int i = 1; i <= n; i++){
		if (cnt[i]) c++;
	}
	if (c == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";
	return 0;
}
