#include <iostream>

using namespace std;

int main() 
{
    int n,r,b,c,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>x>>y;
    	r=3*x*3*x+y*y;
    	b=2*x*x+(5*y)*(5*y);
    	c=-100*x+y*y*y;
    	if(r>b&&r>c)
    	  cout<<"Rafael ganhou"<<endl;
    	else if(b>r&&b>c)
    	   cout<<"Beto ganhou"<<endl;
    	else if(c>r&&c>b)
    	   cout<<"Carlos ganhou"<<endl;
	}
	return 0;
}