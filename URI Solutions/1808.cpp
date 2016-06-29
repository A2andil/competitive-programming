#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string x;
    int count;
    double result;
    while(cin>>x)
    {
        count=0;
        result=0;
        for(int i=0;i<x.length();i++)
        {
            if(i+1<x.length()&&x[i]=='1'&&x[i+1]=='0')
            {
                result+=10;
                count++;
                i++;
            }
            else
            {
                result+=(x[i]-'0');
                count++;
            }
        }
        cout<<fixed<<setprecision(2)<<result/count<<endl;
    }
    return 0;
}
