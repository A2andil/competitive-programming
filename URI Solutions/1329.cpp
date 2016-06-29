#include <iostream>
using namespace std;

int main() 
{
	int n,y,count1=0,count2=0;
	while(cin>>n)
	{
		if(n==0)
		break;
		for(int i=0;i<n;i++)
		{
			cin>>y;
			if(y==0)
			count1++;
			else if(y==1)
			count2++;
		} 
		cout<<"Mary won "<<count1<<" times and John won "<<count2<<" times\n";
		count1=0;
		count2=0;
	}
	return 0;
}