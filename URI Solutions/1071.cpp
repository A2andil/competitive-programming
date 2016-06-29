#include <iostream>
using namespace std;

int main()
{
	int x,y,num;
	int sum=0,swap;
	while(cin>>x>>y)
	{
		if(x<y)
		{
	       x=x+y;
	       y=x-y;
	       x=x-y;
		}
		for(y=y+1;y<x;y++)
		{
		if(y%2!=0)
		sum+=y;
		}
		cout<<sum<<endl;
		sum=0;
    }
return 0;
}
