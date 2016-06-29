#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	    int in,max=0,p;
		for(int i=0;i<100;i++)
		{
		 cin>>in;
	     	if(max<in)
	     	{
		    	max=in;
		    	p=i;
	    	}
		}
		cout<<max<<"\n"<<p+1<<endl;
return 0;
}
