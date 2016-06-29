#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num[6];
	float sum = 0, avg;
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> num[i];
		if (num[i]>0)
		{
			count++;
			sum += num[i];
		}
	}
	avg = sum / count;
	cout << count << " valores positivos" << endl;
	cout << fixed << setprecision(1) << avg << endl;
    return 0;
}
