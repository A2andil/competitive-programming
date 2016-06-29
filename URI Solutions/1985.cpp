#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int a,n,ii;
	float sum=0;
	float arr[5]={1.5,2.5,3.5,4.5,5.5};
	while(cin>>a)
	{
		for(int i=0;i<a;i++)
		{
			cin>>n>>ii;
			sum+=arr[n-1001]*ii;
		}
		cout<<fixed<<setprecision(2)<<sum<<endl;
		sum=0;
	}
	return 0;
}