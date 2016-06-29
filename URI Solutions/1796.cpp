#include <iostream>
using namespace std;

int main() 
{
	int x,y;
	float result=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>y;
		if(y==0)
		  result++;
	}
	result=result*100/x;
	if(result>50)
	  cout<<"Y"<<endl;
	else 
	  cout<<"N"<<endl; 
	return 0;
}