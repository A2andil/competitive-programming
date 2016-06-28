#include <iostream>

using namespace std;

int main()
{
    int res,count=0;
    string num;
    cin>>num;
    while(num.length()>1)
    {
        res = 0;
        for(int i=0;i<num.length();i++)
            res += (num[i]-48);

        num = to_string(res);
        count++;
    }
    cout<<count<<endl;
    return 0;
}
