#include <iostream>

using namespace std;

int main()
{
	long long x,n=0;
	cin>>x;
	for(int i=2;i<x-1;i++)
		n+=i;

	cout<<n<<endl;
	return 0;
}
