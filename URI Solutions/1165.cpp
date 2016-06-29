#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int t,a;
	    cin>>t;
		for(int i=0;i<t;i++)
		{
			cin>>a;
			if(a==0||a==1)
			cout<<a<<" nao eh primo"<<endl;
			else if(a==2||a==3)
			{
				cout<<a<<" eh primo"<<endl;
				continue;
			}
			else if(a>3)
			for(int i=sqrt(a);i>=2;i--)
			{
				if(a%i==0)
				{
					cout<<a<<" nao eh primo"<<endl;
					break;
				}
				else if(i==2)
				cout<<a<<" eh primo"<<endl;
			}

	    }
    return 0;
}
