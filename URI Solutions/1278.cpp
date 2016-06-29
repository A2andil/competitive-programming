#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,max,y,count=0;
    while(cin>>n)
    {
        if(n==0)
            break;

        if(count!=0)
            cout<<endl;
        max=0;
        string arr[n];
        string x,z;
        getline(cin,x);

        for(int ii=0;ii<n;ii++)
        {
              arr[ii]="";
              getline(cin,x);
              for(int i=0;i<x.length();i++)
              {
                if(x[i]>=65&&x[i]<=90)
                   arr[ii]+=x[i];
                 else if(i!=0&&i!=x.length()-1&&x[i]==' '&&x[i-1]!=' ')
                   arr[ii]+=' ';
              }

              z=arr[ii];
              if(z[z.length()-1]==' ')
                arr[ii]=z.substr(0,z.length()-1);

              y=arr[ii].length();
              if(y>max)
                max=y;

        }
        for(int ii=0;ii<n;ii++)
           cout<<setw(max)<<arr[ii]<<endl;

        count++;

    }
    return 0;
}
