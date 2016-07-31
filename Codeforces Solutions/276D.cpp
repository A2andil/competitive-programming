#include <iostream>

using namespace std;

int main()
{
    long long n,m,max,res=1; cin>>n>>m;
    max = n^m;

    while(max>0)
        max >>=1,res*=2;
    cout<<res-1<<endl;
    return 0;
}
