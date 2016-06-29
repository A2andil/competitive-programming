#include <iostream>
using namespace std;

int main()
{
	int n,cn=0,co=0,a;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>=10&&a<=20)
			cn++;
			else
			co++;
		}
		cout<<cn<<" in"<<endl;
		cout<<co<<" out"<<endl;
	}
return 0;
}