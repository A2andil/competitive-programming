#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, a, sumc = 0, sumr = 0, sums = 0;
	char b;
	while (cin >> n)
	{
		for (int i = 0; i<n; i++)
		{
			cin >> a >> b;
			if (a <= 15 && a >= 1)
			{
				if (b == 'C')
					sumc += a;
				else if (b == 'R')
					sumr += a;
				else if (b == 'S')
					sums += a;
			}
		}
		float t = sumr + sums + sumc;
		cout << "Total: " << t << " cobaias" << endl;
		cout << "Total de coelhos: " << sumc << endl;
		cout << "Total de ratos: " << sumr << endl;
		cout << "Total de sapos: " << sums << endl;

		if (t == 0)
			t = t + 1;
		cout << "Percentual de coelhos: " << fixed << setprecision(2) << (sumc / t) * 100 << " %" << endl;
		cout << "Percentual de ratos: " << fixed << setprecision(2) << (sumr / t) * 100 << " %" << endl;
		cout << "Percentual de sapos: " << fixed << setprecision(2) << (sums / t) * 100 << " %" << endl;
	}
	return 0;
}