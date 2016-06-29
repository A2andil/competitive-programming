#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
	long int n,a,b;
	float c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		c=a*b/2;
		cout<<ceil(c)<<" cm2"<<endl;
	}
	return 0;
}