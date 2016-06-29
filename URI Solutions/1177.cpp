#include <iostream>

using namespace std;

int main()
{
    int n;
	int num[1000];
	while(cin>>n)
	{
		for(int i=0,m=0;i<1000;i++,m++)
		{
		if(m==n)
		m=0;
		cout<<"N["<<i<<"] = "<<m<<endl;
		}
	}
    return 0;
}
