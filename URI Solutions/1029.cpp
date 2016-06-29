#include <iostream>

using namespace std;
int m;
int fib(int n)
{
    m++;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n,x,res;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        m=0;
        cin>>x;
        res=fib(x);
        cout<<"fib("<<x<<") = "<<m-1<<" calls = "<<res<<endl;
    }
    return 0;
}
