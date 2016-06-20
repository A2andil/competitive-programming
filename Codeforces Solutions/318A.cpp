#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long n,k,n_o,res;
    while(cin>>n>>k)
    {
        n_o = n/2+n%2;
        
        if(n_o>=k)
            res = 1 + 2*(k-1);
        else
            res = 2 + (k-n_o-1)*2;

        cout<<res<<endl;
    }
    return 0;
}
