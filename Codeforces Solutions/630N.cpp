#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, r1, r2, s;
	while (cin >> a >> b >> c)
	{
		s = b*b - 4 * a*c;
		if (s >= 0 && a != 0)
		{
			r1 = (-b + sqrt(s)) /(2 * a);
			r2 = (-b - sqrt(s)) / (2 * a);
			if(r2>r1)
            {
                s=r2;
                r2=r1;
                r1=s;
            }
			cout <<fixed << setprecision(16) << r1 << endl;
			cout <<fixed << setprecision(16) << r2 << endl;
		}
	}
	return 0;
}
