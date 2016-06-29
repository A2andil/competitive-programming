#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	float a, b, c, r1, r2, s;
	while (cin >> a >> b >> c)
	{
		s = b*b - 4 * a*c;
		if (s >= 0 && a != 0)
		{
			r1 = (-b + sqrt(s)) /(2 * a);
			r2 = (-b - sqrt(s)) / (2 * a);
			cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
			cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
		}
		else
			cout << "Impossivel calcular" << endl;
	}
	return 0;
}