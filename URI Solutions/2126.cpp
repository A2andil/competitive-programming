#include <iostream>
#include<iomanip>
using namespace std;

#define LL long long

int main()
{
    LL n,start,count=1,res;
    string num1,num2;
    while(cin>>num1>>num2)
    {
        res = 0,start = 0;

        for(int i=0;i<num2.length();i++)
            if(num2.substr(i,num1.length())==num1)
            {
                res++;
                start = i+1;
            }

        cout<<"Caso #"<<count++<<":\n";

        if(start == 0)
            cout<<"Nao existe subsequencia\n\n";
        else
        {
            cout<<"Qtd.Subsequencias: "<<res<<endl;
            cout<<"Pos: "<<start<<"\n\n";
        }

    }
    return 0;
}
