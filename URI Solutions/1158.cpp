#include <iostream>

using namespace std;

int main()
{
    int x,y,sum=0,lop;
	cin>>lop;
	while(cin>>x>>y)
	{
		lop--;
	   for(int i=x;;i++)
	   {
	   	    if(i%2!=0&&y>0)
	   	    {
	   	    	 sum+=i;
	   	    	 y--;
			}
			if(y==0)
			break;
	   }
	   cout<<sum<<endl;
	   sum=0;
	   if(lop==0)
		break;
	}
return 0;
}
