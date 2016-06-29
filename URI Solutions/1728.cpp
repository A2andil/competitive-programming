#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int x,y,z;
    string eq,xx,yy,zz;
    int p,t;
    while(cin>>eq)
    {
        if(eq=="0+0=0")
        {
          cout<<"True"<<endl;
          break;
        }

       for(int i=0;i<eq.length();i++)
             if(eq[i]=='+')
                p=i;
             else if(eq[i]=='=')
                t=i;
        xx=eq.substr(0,p);
        yy=eq.substr(p+1,t-p-1);
        zz=eq.substr(t+1,eq.length()-t-1);
        x=0;
        y=0;
        z=0;

       for(int i=0;i<xx.length();i++)
          x+=(xx[i]-'0')*pow(10,i);

       for(int i=0;i<yy.length();i++)
           y+=(yy[i]-'0')*pow(10,i);

       for(int i=0;i<zz.length();i++)
           z+=(zz[i]-'0')*pow(10,i);

        if(x+y==z)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
    return 0;
}
