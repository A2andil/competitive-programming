#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	float x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(y!=0)
		   cout<<fixed<<setprecision(1)<<x/y<<endl;
		else if(y==0)
		   cout<<"divisao impossivel\n";
	}
	return 0;
}
