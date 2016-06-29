#include <iostream>

using namespace std;

int main()
{
    int x,sum=0,count=0;
	while(cin>>x)
	{
		if(x==0)
		break;
	   for(int i=x;;i++)
	   {
	   	    if(i%2==0)
	   	    {
	   	    	count++;
	   	    	 sum+=i;
			}
			if(count==5)
			  break;
	   }
	   cout<<sum<<endl;
	   sum=0;
	   count=0;
	}
return 0;
}
