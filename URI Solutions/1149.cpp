#include <iostream>

using namespace std;

int main()
{
 	int x,y,sum=0;
	while(cin>>x>>y)
	{
		while(y<=0)
		   cin>>y;
		for(int i=x;i<x+y;i++)
		   sum+=i;

		cout<<sum<<endl;
    }
return 0;
}
