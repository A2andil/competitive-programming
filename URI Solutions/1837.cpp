#include <iostream>
using namespace std;
int main() 
{
	int a,b,c,g;
	while(cin>>a>>b)
	{
		if(a>=0)
		{
			g=a/b;
		    c=a-g*b;
		}
		else if(a<0&&b>0)
		{
			if(a%b!=0)
			g=a/b-1;
			else
			g=a/b;
		    c=a-g*b;
		}
		else if(a<0&&b<0)
		{
			if(a%b!=0)
			g=a/b+1;
			else
			g=a/b;
		    c=a-g*b;
		}
		cout<<g<<" "<<c<<endl;
	}
	return 0;
}