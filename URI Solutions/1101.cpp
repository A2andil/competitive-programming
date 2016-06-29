#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	while (cin >> a >> b)
	{
		if (a <= 0 || b <= 0)
			break;
		if (b > a)
		{
			b = a + b;
			a = b - a;
			b = b - a;
		}
		for (int i = b; i <= a; i++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "Sum=" << sum << endl;
		sum = 0;
	}
	return 0;
}