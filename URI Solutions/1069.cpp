#include <iostream>

using namespace std;

int main()
{
    string x;
    int n,op,cl,count;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        count=0;
        op=0;
        cl=0;
        cin>>x;
        for(int ii=0;ii<x.length();ii++)
        {
            if(x[ii]=='<')
                op++;
            else if(x[ii]=='>')
            {
                cl++;
                if(op>0)
                 {
                    count++;
                    op--;
                    cl--;
                 }
             }

         }
        cout<<count<<endl;
    }
    return 0;
}
