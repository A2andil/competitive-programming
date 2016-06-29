#include <iostream>

using namespace std;

long long power(int b, int i)
{
	if (i == 0)
		return 1;
	else
		return b*power(b, i - 1);
}

int main()
{
	long long x, y, sum1 = 0, sum2 = 0;
	for (int m = 0; m<2; m++)
	{
		cin >> x >> y;
		if (y>=1 && y<=40 && x >= 1 && x<11)
		{
			int arr[x];
			for (int i = x - 1; i >= 0; i--)
			{
				cin >> arr[i];
				if (m == 0)
					sum1 += arr[i] * power(y, i);
				else if (m == 1)
					sum2 += arr[i] * power(y, i);

			}
		}
	}
	if (y>=1 && y<=40 && x >= 1 && x<11)
	{
		if (sum1<sum2)
			cout << "<" << endl;
		else if (sum1>sum2)
			cout << ">" << endl;
		else
			cout << "=" << endl;
		sum1 = 0;
		sum2 = 0;
	}

	return 0;
}
