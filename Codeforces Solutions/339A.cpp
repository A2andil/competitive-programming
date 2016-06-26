#include <iostream>

using namespace std;

int main()
{
    int a1=0,a2=0,a3=0;
    string x,y="";
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='1')
            a1++;
        else if(x[i]=='2')
            a2++;
        else if(x[i]=='3')
            a3++;
    }
     for(int i=0;i<a1;i++)
        y+="1+";
     for(int i=0;i<a2;i++)
        y+="2+";
     for(int i=0;i<a3;i++)
        y+="3+";
     y=y.substr(0,y.length()-1);
     cout<<y<<endl;
    return 0;
}
