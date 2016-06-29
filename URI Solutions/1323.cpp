#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv) 
{
	int n,result;
	while(cin>>n)
	{
	    if(n==0)
	      break;
	    result=(n*(n+1)*(2*n+1)/6);
	    cout<<result<<endl;
	}
	
	return 0;
}