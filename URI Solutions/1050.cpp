#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a;
	string name[8]={"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
	int num[8]={61,71,11,21,32,19,27,31};
	while(cin>>a)
	{
		for(int i=0;i<8;i++)
		{
			if(num[i]==a)
			{
			   cout<<name[i]<<endl;
			   break;
			}

            if(i==7&&num[7]!=a)
               cout<<"DDD nao cadastrado"<<endl;
		}
	}
	return 0;
}
