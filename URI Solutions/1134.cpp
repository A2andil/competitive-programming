#include <iostream>

using namespace std;

int main()
{
 	int num1=0,num2=0,num3=0,x;
	while(cin>>x)
	{
		if(x>=1&&x<=4)
		if(x==4)
		{
		  cout<<"MUITO OBRIGADO"<<endl;
          cout<<"Alcool: "<<num1<<endl;
          cout<<"Gasolina: "<<num2<<endl;
          cout<<"Diesel: "<<num3<<endl;
        break;
		}
		else
		switch(x)
		{
			case 1:
				num1++;
				break;
			case 2:
				num2++;
				break;
			case 3:
				num3++;
				break;
		}


    }
    return 0;
}
