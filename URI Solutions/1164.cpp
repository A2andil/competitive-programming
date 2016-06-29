#include <iostream>

using namespace std;

int main()
{
 	int x,a,sum=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>a;
		for(int ii=1;ii<a;ii++)
		   if(a%ii==0)
		     sum+=ii;
		if(sum==a)
		     cout<<a<<" eh perfeito"<<endl;
		else
		     cout<<a<<" nao eh perfeito"<<endl;
		sum=0;
	}
return 0;
}
