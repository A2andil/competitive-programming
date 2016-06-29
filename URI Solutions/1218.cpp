#include <iostream>

using namespace std;

int main()
{
    int count=0;
    int n;
    string x,y;
    while(cin>>n)
    {
        if(count)
            cout<<endl;
        x=(n%10)+'0';
        n=n-(x[0]-'0');
        n=(n%100)/10;
        char s=(n+'0');
        x=s+x;
        count++;
        int f=0,m=0,t=0;
        getline(cin,y);
        getline(cin,y);
        for(int i=0;i<y.length();i++)
        {
            if(i%5==0)
            {
                if(y[i]==x[0]&&y[i+1]==x[1])
                {
                    t++;

                    if(y[i+3]=='M')
                         m++;
                    else if(y[i+3]=='F')
                         f++;
                }
            }
        }

        cout<<"Caso "<<count<<":"<<endl;
        cout<<"Pares Iguais: "<<t<<endl;
        cout<<"F: "<<f<<endl;
        cout<<"M: "<<m<<endl;

    }
    return 0;
}
