#include <iostream>
#include<string>
using namespace std;

int main()
{
    string res;
    int n;
    while(cin>>n)
    {
        res = "";
        int i=1;
        while(res.length()<n)
        {
            res += to_string(i);
            i++;
        }
       cout<<res[n-1]<<endl;
    }
    return 0;
}
