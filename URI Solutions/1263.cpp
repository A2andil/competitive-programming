#include <iostream>
#include<string>
using namespace std;

int main()
{
    string v,res;
    int count,j;
    char hold;
    while(1)
    {
        getline(cin,v);
        if(!cin)
            break;

        res = "";
        count = 0;

        for(int i=0;i<v.length();i++)
            if(i==0||v[i-1]==' ')
            {
                v[i] = (v[i]>'Z')?v[i]:v[i]+32;
                res += v[i];
            }


        for(int i=0;i<res.length()-1;i++)
            if(res[i]==res[i+1])
            {
                count++;
                hold = res[i];
                for(int j=i+2;j<res.length();j++)
                {
                    if(res[j]!=hold)
                    {
                        i=j-1;
                        break;
                    }
                    i=j;
                }
            }
        cout<<count<<endl;
    }
    return 0;
}
