#include <iostream>
using namespace std;

int main() 
{
	int n,n1,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>n1;
		int arr[n1];
		for(int x=0;x<n1;x++)
		    {
		    	cin>>arr[x];
		    	if(x==0)
		    	  count++;
		    	for(int y=x;y>0;y--)
		    	{
		    		if(arr[x]==arr[y-1])
		    		   break;
		    		else if(arr[x]!=arr[y-1]&&y==1)
		    		   count++;
				}
			
			}
			cout<<count<<endl;	
		count=0;
	}
	return 0;
}