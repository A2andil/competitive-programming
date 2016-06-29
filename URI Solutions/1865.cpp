#include <iostream>
using namespace std;

int main() 
{
	string name;
	int a,n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>name>>a;
			if(name=="Thor")
			cout<<'Y'<<endl;
			else
			cout<<'N'<<endl;
		}
	}
	return 0;
}