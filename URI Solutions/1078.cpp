#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=10;i++)
			cout<<i<<" x "<<n<<" = "<<i*n<<endl;
	}
return 0;
}
