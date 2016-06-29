#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=2;i<n+1;i++)
		{
			if(i%2==0)
			  cout<<i<<"^2 = "<<i*i<<endl;
		}
	}
return 0;
}
