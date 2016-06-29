#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		if((b>c)&&(d>a)&&(c+d>a+b)&&(a,d>0)&&a%2==0)
		    cout<<"Valores aceitos"<<endl;
		else
			cout<<"Valores nao aceitos"<<endl;

	}
	return 0;
}
