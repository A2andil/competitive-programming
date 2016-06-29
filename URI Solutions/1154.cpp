#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float sum=0,count=0;
	int x;
	while(cin>>x)
	{
		if(x<0)
		   break;
		sum+=x;
		count++;
	}
	cout<<fixed<<setprecision(2)<<sum/count<<endl;
    return 0;
}
