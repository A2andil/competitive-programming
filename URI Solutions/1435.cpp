#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,avg;
	while(cin>>n)
	{
	       if(n==1)
               {
	            cout<<"  1\n\n";
	            continue;
               }
	    else if(n==0)
	       break;

		avg=n/2;
		int arr[n][n];
		for(int i=0;i<n;i++)
		   for(int ii=0;ii<n;ii++)
		       arr[i][ii]=0;


	        for(int i=avg-1;i>=0;i--)
		   for(int ii=i;ii<n-i;ii++)
		   {
		      arr[i][ii]=i+1;
		      arr[n-i-1][ii]=i+1;
                   }

		 for(int i=0;i<n;i++)
		    for(int ii=0;ii<n;ii++)
		       if(arr[i][ii]==0)
		           arr[i][ii]=arr[i-1][ii];

                 if(n%2!=0)
	            arr[avg][avg]=avg+1;

		 for(int i=0;i<n;i++)
		 {
		     for(int ii=0;ii<n;ii++)
			  if(ii==0)
		              cout<<"  "<<arr[i][ii];
                           else
		               cout<<setw(4)<<arr[i][ii];
		     cout<<endl;
		}
		cout<<endl;
	}
return 0;
}
