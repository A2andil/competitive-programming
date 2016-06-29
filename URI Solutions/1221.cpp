#include <iostream>
#include<cmath>
using namespace std;
bool prime(int y)
{
	if(y==1||y==2||y==3)
	return true;
	else
	{
		for(int p=sqrt(y);p>=2;p--)
		{
			if(y%p==0)
			return false;
			else if(y%p!=0&&p==2)
			return true;
		}
	}
}
int main ()
{
  int n,y;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	cin>>y;
  	 if(prime(y))
  	 cout<<"Prime"<<endl;
  	 else
  	 cout<<"Not Prime"<<endl;
  }
  
  return 0;
}