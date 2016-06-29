#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
	int n;
	while(cin>>n)
	{
		if(n<=0)
		break;
		int arr[n][n];
		 for(int i=0;i<n;i++)
		 {
		 	arr[0][i]=i+1;
		 	arr[i][0]=i+1;
		 }
		 
		 for(int i=1;i<n;i++)
		   for(int ii=i;ii<n;ii++)
		       arr[i][ii]=arr[i-1][ii-1];
		       
		 for(int i=2;i<n;i++)
		   for(int ii=1;ii<i;ii++)
		       arr[i][ii]=arr[i-1][ii-1];
		 
		 for(int i=0;i<n;i++)
		 {
		    for(int ii=0;ii<n;ii++)
		    if(ii==0)
		       cout<<setw(3)<<arr[i][ii];
		       else
		        cout<<setw(4)<<arr[i][ii];
		       cout<<endl;
		 }
		   cout<<endl;
	}
	return 0;
}