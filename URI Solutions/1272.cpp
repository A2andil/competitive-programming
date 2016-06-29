#include <iostream>

using namespace std;

int main()
{
    int n;
    string x;
    cin>>n;
    getline(cin,x);
    for(int i=0;i<n;i++)
    {
        getline(cin,x);
        for(int ii=0;ii<x.length();ii++)
        {
            if(ii==0&&(x[ii]>='a'&&x[ii]<='z'))
                cout<<x[ii];
           if((x[ii]<'a'||x[ii]>'z')&&(x[ii+1]>='a'&&x[ii+1]<='z'))
                cout<<x[ii+1];
        }
        cout<<endl;
    }
    return 0;
}
