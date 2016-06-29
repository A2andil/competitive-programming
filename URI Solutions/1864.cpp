#include <iostream>
using namespace std;

int main()
{

	String arr="LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cout<<arr[i];

		cout<<endl;
	}
	return 0;
}
