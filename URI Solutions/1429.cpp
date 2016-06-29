#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    string x;
    int result;
    while(cin>>x)
    {
        if(x=="0")
            break;

        result=0;
        for(int i=0;i<x.length();i++)
            result+=(x[i]-'0')*fact(x.length()-i);

        cout<<result<<endl;
    }
    return 0;
}
