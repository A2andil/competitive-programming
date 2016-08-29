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
	int n, rsx = 0, rsy = 0, rsz = 0, x, y, z; cin >> n;
	while (n--){
		cin >> x >> y >> z;
		rsx += x;
		rsy += y;
		rsz += z;
	}
	if (!rsx&&!rsy&&!rsz) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
