#include <iostream>
using namespace std;

int main() 
{
	int x;
	while(cin>>x)
	{
		if(x==2002)
		{
			cout<<"Acesso Permitido\n";
			break;
		}
	
		cout<<"Senha Invalida\n";
	}
	return 0;
}