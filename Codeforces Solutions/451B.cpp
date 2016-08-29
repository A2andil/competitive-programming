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

ll arr[100005];

int main(){
	bool ch = true, ch2 = true;
	int n, start = -1, end = -1, cnt = 0; cin >> n; cin >> arr[1];
	arr[0] = 0;
	for (int i = 2; i <= n; i++){
		cin >> arr[i];
		if (arr[i] <= arr[i - 1] && ch){
			start = i - 1, end = i;
			ch = false;
		}
		else if (arr[i] <= arr[i - 1] && ch2){
			end = i;
		}
		else{
			if (!ch) ch2 = false;
		}
	}
	cnt += start - 1;
	for (int i = end + 1; end != -1 && i <= n; i++){
		if (i == end + 1){
			if(arr[start] <= arr[i]) cnt++;
		}
		else if (arr[i] >= arr[i - 1]) cnt++;
	}
	if (start == -1) cout << "yes\n1 1\n";
	else if (cnt + (end - start + 1) == n &&(arr[start - 1] <= arr[end])){
		cout << "yes\n";
		cout << start << ' ' << end << endl;
	}
	else cout << "no\n";
	return 0;
}
