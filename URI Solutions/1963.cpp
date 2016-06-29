#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double a,b,inc;
	while(cin>>a>>b)
	{
		inc=b-a;
		inc=inc/a*100;
		cout<<fixed<<setprecision(2)<<inc<<"%\n";
	}
	return 0;
}