#include<iostream>
using namespace std;
int main()
{
    string res;
    cin>>res;
    for(int i=0;i<res.length();i++)
    {
        if(res[i]=='0')
        {
            res = res.substr(0,i)+res.substr(i+1,res.length()-i);
            break;
        }
        else if(i==res.length()-1)
            res = res.substr(0,res.length()-1);
    }
    cout<<res<<endl;
    return 0;
}
