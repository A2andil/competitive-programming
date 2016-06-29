#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2,n,res1,res2;
	cin>>n;
	char c;
	for(int i=0;i<n;i++)
	{
		cin>>x1>>c>>y1;
		cin>>y2>>c>>x2;
		res1=x1+x2;
		res2=y1+y2;
		if(res1>res2)
	    	cout<<"Time 1"<<endl;
		else if(res2>res1)
			cout<<"Time 2"<<endl;
		else if(res1==res2)
		{
			res1=x1+2*x2;
		    res2=2*y1+y2;
		    if(res1>res2)
	    	cout<<"Time 1"<<endl;
		else if(res2>res1)
			cout<<"Time 2"<<endl;
		else if(res1==res2)
		    cout<<"Penaltis"<<endl;
		}
	}
   return 0;
}