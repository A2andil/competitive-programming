#include <iostream>
#include<sstream>
#include<iomanip>
using namespace std;
long long result_f(string x,string y)
{
    if(x=="")
        x+='0';
    if(y=="")
        y+='0';

    long long res1,res2;
    istringstream xx(x),yy(y);
    xx>>res1;
    yy>>res2;

    return res1+res2;
}
double result_d(string x,string y)
{
    if(x=="")
        x+='0';
    if(y=="")
        y+='0';
    x="0."+x;
    y="0."+y;

    if(x.length()>4)
        x=x.substr(0,4);
    if(y.length()>4)
        y=y.substr(0,4);

    double res1,res2;
    istringstream xx(x),yy(y);
    xx>>res1;
    yy>>res2;

    return res1+res2;
}
int main()
{
    string x,y,rsltx,dotx,rslty,doty;
    bool valid;
    int c,i;
    while(cin>>x>>y)
    {
        rsltx="";
        dotx="";
        rslty="";
        doty="";
        c=0;
        cout<<"cpf ";
        for(i=0;c<11&&i<x.length();i++)
        {
            if(x[i]>='0'&&x[i]<='9')
            {
                c++;
                cout<<x[i];
            }
        }
        cout<<endl;

        valid=false;

        for(i;i<x.length();i++)
        {
            if(x[i]>='0'&&x[i]<='9')
            {
                if(!valid)
                    rsltx+=x[i];
                else
                    dotx+=x[i];
            }
            else if(x[i]=='.')
                valid=true;
        }

        valid=false;
        for(i=0;i<y.length();i++)
        {
            if(y[i]>='0'&&y[i]<='9')
            {
                if(!valid)
                    rslty+=y[i];
                else
                    doty+=y[i];
            }
            else if(y[i]=='.')
                valid=true;
        }
       cout<<fixed<<setprecision(2)<<result_f(rsltx,rslty)+result_d(dotx,doty)<<endl;
    }
    return 0;
}
