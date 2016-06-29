#include <iostream>
using namespace std;

int main() 
{
	int n,a,b,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(b<a)
		{
			a=a+b;
	    	b=a-b;
	    	a=a-b;
		}
		for(int y=a+1;y<b;y++)
		{
			if(y%2!=0)
			sum+=y;
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}