#include <iostream>
using namespace std;

int main() 
{
	int h1,m1,h2,m2,result1,result2;
	while(cin>>h1>>m1>>h2>>m2)
	{
		if(h1==0&&h2==0&&m1==0&&m2==0)
		   break;
		result1=h1*60+m1;
		result2=h2*60+m2;
		if(result1>result2)
		    result2+=(24*60);
		cout<<result2-result1<<endl;
	}
	return 0;
}