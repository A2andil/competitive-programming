#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,y,sum=0;
	while(cin>>x>>y)
	{
		if(y<x)
		{
			x=x+y;
			y=x-y;
			x=x-y;
		}
		for(int i=x;i<=y;i++)
		{
			if(i%13!=0)
			sum+=i;
		}
		cout<<sum<<endl;
	}
	return 0;
}