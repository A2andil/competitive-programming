#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x=1;
	for(double i=3,y=2;i<=38;i+=2,y=y*2)
		x+=i/y;

	cout<<fixed<<setprecision(2)<<x<<endl;

    return 0;
}
