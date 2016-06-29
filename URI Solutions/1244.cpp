#include <iostream>
using namespace std;
void sort(string y[],int c,int max)
{
  string yy[100];
  int count=0;
  for(int ii=max;ii>=1;ii--)
    for(int i=0;i<c;i++)
    {
        if(y[i].length()==ii)
            {
                yy[count]=y[i];
                count++;
            }
    }
   for(int ii=0;ii<c-1;ii++)
            cout<<yy[ii]<<" ";
   cout<<yy[c-1]<<endl;
}
int main()
{
    int n,start,end,c,max;
    string x;
    string y[100];
    cin>>n;
    getline(cin,x);
    for(int i=0;i<n;i++)
    {
        c=0;
        max=0;
        start=0;
        getline(cin,x);

        for(int ii=0;ii<x.length();ii++)
        {
            if(x[ii]==' '||ii==x.length()-1)
            {
                if(ii==x.length()-1)
                    ii++;
                y[c]=x.substr(start,ii-start);

                if(y[c].length()>max)
                    max=y[c].length();

                c++;
                start=ii+1;
            }
        }

       sort(y,c,max);

    }
    return 0;
}
