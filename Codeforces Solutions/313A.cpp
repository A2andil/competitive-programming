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
	ll a, b, c; cin >> a;
	b = a / 10;
	c = (a / 100) * 10 + a % 10;
	if (a > b&&a > c) cout << a << endl;
	else if (b>a&&b>c) cout << b << endl;
	else cout << c << endl;
	return 0;
}
