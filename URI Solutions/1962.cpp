#include <iostream>
using namespace std;

int main()
{
	unsigned long x;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=2015)
		    cout<<x-2014<<" A.C."<<endl;
		else
		    cout<<2015-x<<" D.C."<<endl;
	}
	return 0;
}
