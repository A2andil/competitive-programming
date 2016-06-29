#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	string name1,type1,name2,type2;
    long long x1,x2;
    cin>>name1>>type1>>name2>>type2;
    cin>>x1>>x2;
    if((x1+x2)%2==0)
    {
	if(type1=="PAR")
    cout<<name1<<endl;
    else
    cout<<name2<<endl;
	}
    else
    {
    if(type1=="IMPAR")
    cout<<name1<<endl;
    else
    cout<<name2<<endl;
	}
	}
	
	return 0;
}