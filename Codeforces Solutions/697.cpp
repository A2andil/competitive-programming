#include <iostream>
#include<cmath>
using namespace std;

typedef long long L;
typedef int I;
typedef string S;

L power(L b,L s)
{
    if(s==0)
        return 1;
    return b*power(b,s-1);
}

I to_decimal(S ms)
{
    I res=0,j;
    for(j=0;j<ms.length();j++)
        res += (ms[j]-48)*power(10,ms.length()-j-1);

    return res;
}

S rep_zero(I n)
{
    S res="";
    while(n)
    {
        res +='0';
        n--;
    }

   return res;
}

int main()
{
    S v,real,dec,ms,res="";
    I dot,e,vms;
    cin>>v;
    for(int i=0;i<v.length();i++)
        if(v[i]=='.')
            dot = i;
        else if(v[i]=='e')
        {
            e = i;
            break;
        }

    real = v.substr(0,dot);
    dec = v.substr(dot+1,e-dot-1);
    for(I j=dec.length()-1;j>=0;j--)
      if(dec[j]!=48)
      {
          dec = dec.substr(0,j+1);
          break;
      }
      else if(j==0)
          dec = "";
    ms = v.substr(e+1,v.length()-e-1);

    vms = to_decimal(ms);

    if(vms>=dec.length())
        res = real+dec+rep_zero(vms-dec.length());
    else
        res = real+dec.substr(0,vms)+'.'+dec.substr(vms,dec.length()-vms);

    cout<<res<<endl;
    return 0;
}
