#include <iostream>
using namespace std;

int main()
{
	int i,j=7;
	for(i=1;i<10;i+=2)
	{
		for(j;j>3+i;j--)
		   cout<<"I="<<i<<" J="<<j<<endl;
	    j+=5;
	}
	return 0;
}
