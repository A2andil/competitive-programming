#include <iostream>
using namespace std;

int main() 
{
	int x,y,dif;
	cin>>x>>y;
	int arr[y];
	for(int i=0;i<y;i++)
		cin>>arr[i];
		
	for(int i=0;i<y-1;i++)
	{
		if(arr[i+1]>arr[i])
		{
			dif=arr[i+1]-arr[i];
			if(dif>x)
			{
				cout<<"GAME OVER"<<endl;
				break;
			}
		}
		else if(arr[i+1]<arr[i])
		{
			dif=arr[i]-arr[i+1];
			if(dif>x)
			{
				cout<<"GAME OVER"<<endl;
				break;
			}
		}
		if(i==y-2)
		cout<<"YOU WIN"<<endl;
	}
	return 0;
}