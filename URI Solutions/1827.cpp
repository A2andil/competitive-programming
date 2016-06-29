#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int arr[n][n];
		for(int i=0;i<n;i++)
		  for(int ii=0;ii<n;ii++)
		       arr[i][ii]=0;

		for(int i=0;i<n/2;i++)
        {
		  	 arr[i][i]=2;
		  	 arr[i][n-i-1]=3;
		  	 arr[n-i-1][i]=3;
		  	 arr[n-i-1][n-i-1]=2;
        }

        for(int i=n/3;i<n-n/3;i++)
            for(int ii=n/3;ii<n-n/3;ii++)
		     	arr[i][ii]=1;

		  if(n%2!=0)
		      arr[n/2][n/2]=4;

		  for(int i=0;i<n;i++)
		    {
		     for(int ii=0;ii<n;ii++)
		       cout<<arr[i][ii];
		       cout<<endl;
		     }
		     cout<<endl;

	}
	return 0;
}
