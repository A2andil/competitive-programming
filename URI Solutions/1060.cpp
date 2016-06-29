#include <iostream>

using namespace std;

int main()
{
    float num[6];
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> num[i];
		if (num[i]>0)
			count++;
	}
	cout << count << " valores positivos" << endl;
return 0;
}
