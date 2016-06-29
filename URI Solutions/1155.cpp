#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x=0;
	for(double i=1;i<=100;i++)
		x+=(1/i);

	cout<<fixed<<setprecision(2)<<x<<endl;
    return 0;
}
