#include <iostream>
using namespace std;

int main()
{

    string x;
    bool valid;
    int  count;
    while(cin>>x)
    {
        count=0;
        valid=false;
        for(int ii=0;ii<x.length();ii++)
        {
            if(x[ii]=='(')
               count++;
            else if(x[ii]==')')
            {
                count--;
                if(count<0)
                {
                  valid=false;
                  break;
                }
            }
        }
        if(count==0)
            valid=true;

        if(valid)
            cout<<"correct"<<endl;
        else
            cout<<"incorrect"<<endl;

    }
    return 0;
}
