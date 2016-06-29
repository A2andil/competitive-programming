#include <iostream>
#include<iomanip>

using namespace std;

int main() 
{
	int a,b;
	float x;
	while(cin>>a>>b)
	{
		x=(a*b)/12.0;
		cout<<fixed<<setprecision(3)<<x<<endl;
	}
	return 0;
}
