#include <iostream>

using namespace std;

int main()
{
    long long t,s,x,i;
    cin>>t>>s>>x;
    for(i= t; ; i+=s)
    {
        if(x==i)
        {
            cout<<"YES\n";
            break;
        }
        else if((x==i+1)&&x!=t+1)
        {
            cout<<"YES\n";
            break;
        }
        else if(i>x)
        {
            cout<<"NO\n";
            break;
        }

    }
    return 0;
}
