#include <iostream>
using namespace std;

int main()
{
	int i,j=7;
	for(i=1;i<10;i+=2)
	{
		for(int y=j;j>4;j--)
		    cout<<"I="<<i<<" J="<<j<<endl;
		j=7;
	}
return 0;
}
