#include <iostream>

using namespace std;

int main()
{
    long long n,m,count,res;
    cin>>m>>n;
    if(n>m)
    {
        int swap = m;
        m = n;
        n = swap;
    }
    count = 0;
    res = m / 10;
    for(int i=1;i<n+1;i++)
    {
        count += res*2;

        for(int j=res*10+1;j<m+1;j++)
            if((i+j)%5==0)
                count++;
    }
    
    cout<<count<<endl;
    return 0;
}
