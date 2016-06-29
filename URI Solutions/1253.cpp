#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	string x;
	int n,i;
	cin>>n;
	for(int ii=0;ii<n;ii++)
	{
		cin>>x>>i;
		for(int iii=0;iii<x.size();iii++)
		{
			x[iii]=x[iii]-i;
			if(x[iii]<'A')
			  x[iii]+=26;
		}
		cout<<x<<endl;
	}
	return 0;
}