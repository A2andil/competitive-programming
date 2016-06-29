#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		int arr[x];
		for(int ii=0;ii<x;ii++)
		   cin>>arr[ii];
		if(x%2!=0)
		    cout<<"Case "<<i<<": "<<arr[x/2]<<endl;
		else
		   cout<<"Case "<<i<<": "<<(arr[x/2]+arr[x/2-1])/2<<endl;
	}

	return 0;
}
