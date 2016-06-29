#include <iostream>
using namespace std;
int main()
{
	int n,count=0;
	int arr[5];
	while(cin>>n)
	{
		for(int i=0;i<5;i++)
		{
			cin>>arr[i];
			if(arr[i]==n)
			    count++;
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
