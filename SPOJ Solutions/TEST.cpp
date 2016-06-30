#include <iostream>

using namespace std;

int main()
{
    int x;
    bool valid=true;
    while(cin>>x)
    {
        if(x!=42&&valid)
            cout<<x<<endl;
        else
            valid=false;
    }
    return 0;
}
