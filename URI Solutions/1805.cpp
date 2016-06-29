#include <iostream>
using namespace std;

int main()
{
	long long x,y,result=0;
	cin>>x>>y;
		result=((y*(y+1))/2)-((x-1)*(x)/2);
		cout<<result<<endl;
	return 0;
}