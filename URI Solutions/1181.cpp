#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	double sum=0;
	int l;
	double arr[12][12];
    char c;
    cin>>l;
	cin>>c;
    if(l>=0&&l<12)
    {
    	for(int i=0;i<12;i++)
    	   for(int ii=0;ii<12;ii++)
    	       cin>>arr[i][ii];

        for(int i=0;i<12;i++)
    	   sum+=arr[l][i];

	if(c=='S')
	     cout<<fixed<<setprecision(1)<<sum<<endl;
	else if(c=='M')
	     cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
   }
return 0;
}
