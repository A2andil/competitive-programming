#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a;
	float n;
	while(cin>>a>>n)
		cout<<fixed<<setprecision(3)<<a/n<<" km/l"<<endl;
	
	return 0;
}
