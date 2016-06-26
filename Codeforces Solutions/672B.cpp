#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,res,no;
    char v;
    while(cin>>n)
    {
        int arr[26] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>v;
            arr[v-'a']++;
        }

        res = 0;
        no = 0;
        for(int i=0;i<26;i++)
            if(arr[i]>1)
                res += (arr[i]-1);
            else if(arr[i]==0)
                no++;

        if(no>=res)
              cout<<res<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}
