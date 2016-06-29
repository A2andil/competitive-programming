#include <iostream>
using namespace std;

int main() 
{
	int x;
	float y;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>y;
		int count=0;
		while(y>1)
		{
			y/=2;
			count++;
		}
		cout<<count<<" dias"<<endl;
	}
	return 0;
}