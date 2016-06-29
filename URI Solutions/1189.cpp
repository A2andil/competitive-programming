#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum=0;
	double arr[12][12];
    char c;
	cin>>c;
    	for(int i=0;i<12;i++)
    	   for(int ii=0;ii<12;ii++)
    	       cin>>arr[i][ii];

         for(int i=0;i<12;i++)
         {
         	int z=(i<6)?i:11-i;
        	for(int ii=0;ii<z;ii++)
            	sum+=arr[i][ii];
	     }

	if(c=='S')
	     cout<<fixed<<setprecision(1)<<sum<<endl;
	else if(c=='M')
	     cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
return 0;
}
