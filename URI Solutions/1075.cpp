#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<10000-2;i++)
		{
			if(i%n==0)
			  cout<<i+2<<endl;
		}
	}
return 0;
}
