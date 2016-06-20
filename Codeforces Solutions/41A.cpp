#include <iostream>

using namespace std;
string Reverse(string y)
{
    string res="";
    for(int i=0;i<y.length();i++)
        res+=(y[y.length()-i-1]);

    return res;
}
int main()
{
    string x,y;
    cin>>x>>y;
    if(x==Reverse(y))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
