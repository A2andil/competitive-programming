#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
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
    	for(int ii=12-i;ii<12;ii++)
    	sum+=arr[i][ii];
	}
	if(c=='S')
	    cout<<fixed<<setprecision(1)<<sum<<endl;
	else if(c=='M')
	    cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
	return 0;
}
