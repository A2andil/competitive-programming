#include<iostream>
using namespace std;
int main()
{
	int n,p1,p2,x=0,y=0;
	while(cin>>n)
	{
		if(n==0)
		break;
		for(int i=0;i<n;i++)
		{
		   cin>>p1>>p2;
		   if(p1>p2)
		      x++;
		   else if(p2>p1)
		      y++;
		}
		cout<<x<<" "<<y<<endl;
		x=0,y=0;
	}
	return 0;
}
