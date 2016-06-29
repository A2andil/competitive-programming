#include <iostream>

using namespace std;

int main()
{
	int x;
	while(cin>>x)
	{
		for(int i=1;i<x+1;i++)
		{
			for(int ii=i+3*(i-1);ii<i+3*i;ii++)
				cout<<ii<<" ";

			cout<<"PUM\n";
		}
    }
    return 0;
}
