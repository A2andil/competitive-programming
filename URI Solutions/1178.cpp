#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n;
	double num[100];
	while(cin>>num[0])
	{
		cout<<"N["<<0<<"] = "<<fixed<<setprecision(4)<<num[0]<<endl;
		for(int i=1;i<100;i++)
		{
		   num[i]=num[i-1]/2.0;
		   cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<num[i]<<endl;
		}
	}
return 0;
}
