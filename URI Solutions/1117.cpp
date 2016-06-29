#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	float x,sum=0.0;
	int count =0;
	while(cin>>x)
	{
		if(x>=0.0&&x<=10.0)
		{
			count++;
			sum+=x;
			if(count==2)
			{
				sum=sum/2;
				cout<<fixed<<setprecision(2)<<"media = "<<sum<<endl;
			}
		}
		else
		cout<<"nota invalida\n";
	}
	return 0;
}