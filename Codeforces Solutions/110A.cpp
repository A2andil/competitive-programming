#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string x;
    int count;
    while(cin>>x)
    {
        count = 0;
        for(int i=0;i<x.length();i++)
            if(x[i]=='4'||x[i]=='7')
                count++;

        cout<<(count==7||count==4?"YES\n":"NO\n");
    }
    return 0;
}
