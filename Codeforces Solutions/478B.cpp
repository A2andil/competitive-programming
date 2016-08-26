//IN THE NAME OF ALLAH
#include<iostream>
using namespace std;

int main(){
	long long n, m; cin >> n >> m;
	long long mx = n - m + 1;
	mx = mx*(mx - 1) / 2;
	long long min = n / m,rmin=n%m,rsmin;
	rsmin = min*(min + 1) / 2 * rmin;
	rsmin += min*(min - 1) / 2 * (m - rmin);
	cout << rsmin <<' '<<mx<< endl;
	return 0;
}
