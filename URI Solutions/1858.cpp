#include <iostream>
using namespace std;

int main() 
{
	long x;
	int n;
	cin>>n;
	int min,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(min>x||i==0)
		{
			min=x;
			count=i+1;
		}
    }
    cout<<count<<endl;
	return 0;
}