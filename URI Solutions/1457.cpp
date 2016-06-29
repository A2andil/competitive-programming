#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long m,res,ii,n,k;
    string x,num,s;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        num="";
        n=0;
        res=1;
        for(ii=0;ii<x.length();ii++)
        {
           if(x[ii]>='0'&&x[ii]<='9')
                num+=x[ii];
            else
                break;
        }
        s=x.substr(ii,x.length()-ii);
        k=s.length();

        for(ii=0;ii<num.length();ii++)
            n+=(num[ii]-'0')*pow(10,num.length()-ii-1);

        for(ii=0;ii<n;ii++)
        {
            if(ii*k<n)
                res*=(n-ii*k);
            else
                break;
        }
        cout<<res<<endl;
    }
    return 0;
}
