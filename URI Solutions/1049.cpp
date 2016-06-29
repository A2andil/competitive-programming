#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	string a,b,c;
	string num1[5]={"ave","carnivoro","onivoro","aguia","pomba"};
	string num2[5]={"mamifero","onivoro","herbivoro","homem","vaca"};
	string num3[5]={"inseto","hematofago","herbivoro","pulga","lagarta"};
	string num4[5]={"anelideo","hematofago","onivoro","sanguessuga","minhoca"};
	cin>>a;
	cin>>b;
	cin>>c;
	if(a=="vertebrado")
	{
		if(b==num1[0])
			for(int i=1;i<3;i++)
				if(num1[i]==c)
					cout<<num1[i+2]<<endl;
					
		if(b==num2[0])
				for(int i=1;i<3;i++)
				if(num2[i]==c)
					cout<<num2[i+2]<<endl;
	}
		
	else if(a=="invertebrado")
	{
		if(b==num3[0])
			for(int i=1;i<3;i++)
				if(num3[i]==c)
					cout<<num3[i+2]<<endl;

		if(b==num4[0])
			for(int i=1;i<3;i++)
				if(num4[i]==c)
					cout<<num4[i+2]<<endl;
	}
	return 0;
}