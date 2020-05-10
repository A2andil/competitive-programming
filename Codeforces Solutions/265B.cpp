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
	int n,cur,pre,rs,m; cin >> n,m=n;
	cin >> pre,n--,rs=pre;
	while (n--){
		cin >> cur;
		if (pre > cur){
			rs += pre-cur;
		}
		else{
			rs += cur - pre;
		}
		if (n) pre = cur;
	}
	cout << rs+2*m-1 << endl;
	return 0;
}
