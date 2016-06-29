#include <iostream>

using namespace std;
int main()
{
	int n,max=0,a;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>max)
			max=a;
		}
		if(max<10)
		   a=1;
		else if(max>=10&&max<20)
		   a=2;
		else if(max>=20)
		    a=3;
		cout<<a<<endl;
		max=0;
	}
	return 0;
}
