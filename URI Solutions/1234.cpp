#include <iostream>

using namespace std;

int main()
{
    string x;
    int count;
    while(getline(cin,x))
    {
        count=1;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]!=' ')
            {
                if((count%2==1))
                {
                   if(!(x[i]>='A'&&x[i]<='Z'))
                        x[i]-=32;
                   count++;
                }
                else if(count%2==0)
                {
                    if(!(x[i]>='a'&&x[i]<='z'))
                        x[i]+=32;
                     count++;
                }
            }
        }
        cout<<x<<endl;
    }

    return 0;
}
