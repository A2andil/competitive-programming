#include <iostream>
using namespace std;
long long fact(int i)
{
	if(i==0)
	   return 1;
	else
      return i*fact(i-1);
}
int main ()
{
  long long x,y,sum;
  while(cin>>x>>y)
  {
  	sum=fact(x)+fact(y);
  	cout<<sum<<endl;
  }

  return 0;
}
