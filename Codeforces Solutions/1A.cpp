#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    long long m,n,a;
    while(cin>>m>>n>>a)
    {
        cout<<((m+a-1)/a)*((n+a-1)/a)<<endl;
    }
    return 0;
}
