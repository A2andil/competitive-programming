#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,x,count=0,i;
    cin>>n>>x;
    for(i=1;i<=n;i++)
        if(x%i==0&&x/i<=n)
            count++;
    cout<<count<<endl;
    return 0;
}
