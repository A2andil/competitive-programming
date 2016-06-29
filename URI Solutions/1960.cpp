#include <iostream>
using namespace std;

int main()
{
	char numc[]={'I','V','X','L','C','D','M'};
	long num[]={1,5,10,50,100,500,1000};
	long x,count=0;
	cin>>x;
	for(int i=6;i>=0;i--)
	{
		if(x>=num[i])
		{
		if(x>=900)
		{
			x=x-900;
			cout<<numc[4]<<numc[6];
		}

		 else if(x>=400&&x<500)
		  {
		  	cout<<numc[4]<<numc[5];
		  	x-=400;
		  }

		  else if(x>=90&&x<100)
		  {
		  	cout<<numc[2]<<numc[4];
		  	x-=90;
		  }

		  else if(x>=9&&x<10)
		  {
		  	cout<<numc[0]<<numc[2];
		  	x-=9;
		  }

		  else if(x>=40&&x<50)
		  {
		  	cout<<numc[2]<<numc[3];
		  	x-=40;
		  }

		  else if(x>=4&&x<5)
		  {
		  	cout<<numc[0]<<numc[1];
		  	x-=4;
		  }

		  else
		  {
		    count=x/num[i];
		    for(int ii=0;ii<count;ii++)
		    cout<<numc[i];
		    x=x-count*num[i];
		  }

		}
	}
	cout<<endl;
	return 0;
}
