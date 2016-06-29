#include <iostream>
using namespace std;

int main() 
{
	int mount,a,b,c,d;
	cin>>mount;
	cin>>a>>b;
	cin>>c>>d;
	if(mount>=a&&mount<=b&&mount>=c&&mount<=d)
	  cout<<"possivel"<<endl;
	else
	   cout<<"impossivel"<<endl;
	return 0;
}