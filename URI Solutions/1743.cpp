#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	
    int con1[5],con2[5],n=0;
	for(int i=0;i<5;i++)
		cin>>con1[i];
		
	for(int i=0;i<5;i++)
	{
		cin>>con2[i];
		if(con2[i]!=con1[i])
		   n++;
	}
	if(n==5)
	  cout<<"Y"<<endl;
	 else
	  cout<<"N"<<endl;
	return 0;
}
