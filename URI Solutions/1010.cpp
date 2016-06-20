#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x1,x2,n1,n2;
	float p1,p2;
	cin>>x1>>n1>>p1;
	cin>>x2>>n2>>p2;
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(n1*p1)+(n2*p2)<<endl;

 return 0;
}
