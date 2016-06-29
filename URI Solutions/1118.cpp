#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x, sum = 0.0,c=0;
	int count = 0;
	while (cin >> x)
	{
		if (x >= 0.0&&x <= 10.0)
		{
			count++;
			sum += x;
			if (count == 2)
			{
				sum = sum / 2;
				cout << fixed << setprecision(2) << "media = " << sum << endl;
				sum=0;
				count = 0;
				cout << "novo calculo (1-sim 2-nao)\n";
				while(cin>>c)
				{
			     	if(c==1)
			        	break;
			    	else if(c==2)
					break;
			    	else
			    	{
					   cout << "novo calculo (1-sim 2-nao)\n";
			    	}
		     	}
			}
		}
		else
			cout << "nota invalida\n";
			if(c==2)
		break;
	}
	return 0;
}