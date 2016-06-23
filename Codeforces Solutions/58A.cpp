#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string v,arr="hello";
    int count,start;
    while(cin>>v)
    {
        count = 0;
        start = 0;
        for(int i=0;i<arr.length();i++)
            for(int j=start;j<v.length();j++)
            {
                if(arr[i]==v[j])
                {
                    start = j+1;
                    count++;
                    break;
                }
            }
        if(count==arr.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
