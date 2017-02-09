//in the name of God

#include <algorithm>
#include <cmath>
#include <iostream>

#define ll long long
using namespace std;

int main() {
	double d, vf, vg;
	while (cin >> d >> vf >> vg) {
		if (sqrt(12 * 12 + d * d) / vg <= 12 / vf) cout << 'S' << endl;
		else cout << 'N' << endl;
	}

	return 0;
}
