#include <iostream>

using namespace std;

int main()
{
    int x,z,count=0,sum=0;
	while(cin>>x>>z)
	{
		while(x>=z)
		  cin>>z;
		for(int i=x;;i++)
		{
			sum+=i;
			count++;
			if(sum>=z)
			{
				cout<<count<<endl;
				break;
			}
		}
	}
return 0;
}
