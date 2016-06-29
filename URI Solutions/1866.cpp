#include <iostream>
using namespace std;

int main() 
{
	int a,n;
	while(cin>>a)
	{
		for(int i=0;i<a;i++)
		{
			cin>>n;
			if(n%2==0)
			     cout<<0<<endl;
			else
			     cout<<1<<endl;
		}
	}
	return 0;
}
