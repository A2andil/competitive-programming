#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	float num[3];
	float avg;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
		    cin>>num[0]>>num[1]>>num[2];
		    avg=(2*num[0]+3*num[1]+5*num[2])/10.0;
		    cout<<fixed<<setprecision(1)<<avg<<endl;
		
		}
	}
return 0;
}