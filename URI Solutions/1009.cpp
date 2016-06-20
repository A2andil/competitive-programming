#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	string name;
	double sal,sol,tot;
	while(cin>>name>>sal>>sol)
	{
	      tot=sal+0.15*sol;
		  cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<tot<<endl;
	}
 return 0;
}
