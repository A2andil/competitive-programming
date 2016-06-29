#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
	   for(int i=0;i<=n/2;i++)
	   {
	   	  for(int x=n/2-i;x>0;x--)
	   	      cout<<" ";
	   	  for(int y=0;y<2*i+1;y++)
	   	      cout<<"*";
	   	   cout<<endl;
	   }
	   for(int i=0;i<2;i++)
	   {
	   	  for(int x=n/2-i;x>0;x--)
	   	      cout<<" ";
	   	  for(int y=0;y<2*i+1;y++)
	   	      cout<<"*";
	   	   cout<<endl;
	   }
	   cout<<endl;
	}
	
	return 0;
}