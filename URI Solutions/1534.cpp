#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		int arr[n][n];
	    for(int i=0;i<n-1;i++)
	    {
	       if(i==0)
	       {
	       	  arr[0][0]=1;
	       	  arr[0][n-1]=2;
	       	  arr[n-1][0]=2;
	       	  arr[n-1][n-1]=1;
		   }
		   else 
		   {
		   	  arr[0][i]=3;
	       	  arr[n-1][i]=3;
		   }
		}
		
		int start=0,end=n-1,swap;
		for(int i=1;i<n-1;i++)
		{
			for(int ii=0;ii<n;ii++)
		   	   arr[i][ii]=arr[i-1][ii];
		   	
		 if(n%2==0)
		 {	
		    if(end!=start+1)
		   	{
		   		swap=arr[i][start];
		   	    arr[i][start]=arr[i][start+1];
		   	    arr[i][start+1]=swap;
			}
		   	start++;
		   	
		   	swap=arr[i][end];
		   	arr[i][end]=arr[i][end-1];
		   	arr[i][end-1]=swap;
		   	end--;
		 }
		 else
		 {
		 	if(end==start+2)
		 	     arr[i][start]=3;
		 	if(end!=start+2)
		   	{
		   		swap=1;
		   	    arr[i][start]=arr[i][start+1];
		   	    arr[i][start+1]=swap;
			}
		   	start++;
		   	
		   	swap=2;
		   	arr[i][end]=arr[i][end-1];
		   	arr[i][end-1]=swap;
		   	end--;
		 }
	   }
		   
		
		for(int i=0;i<n;i++)
		{
			for(int ii=0;ii<n;ii++)
		      cout<<arr[i][ii];
		      cout<<endl;
		}
		  
	}
		       
		
	return 0;
}