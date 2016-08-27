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
	string a, b;
	while (cin >> a >> b){
		if (a == "0"&&b == "0") break;
		long long cnta = (a.length() == 1) ? a[0] - 48 : 0,
			cntb = (b.length() == 1) ? b[0] - 48 : 0;
		while (a.length() > 1){
			cnta = 0;
			for (int i = 0; i<a.length(); i++)
				cnta += (a[i] - 48);
			a = to_string(cnta);
		}
		while (b.length()>1){
			cntb = 0;
			for (int i = 0; i<b.length(); i++)
				cntb += (b[i] - 48);
			b = to_string(cntb);
		}

		if (cnta>cntb) cout << 1 << endl;
		else if (cnta<cntb) cout << 2 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
