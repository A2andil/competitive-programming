#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,rc,rl;
    string x;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        char arr[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                   cin>>arr[i][j];
        cin>>a>>b;
        rl=a/n;
        rc=b/m;
        for(int i=0;i<n;i++)
        {
           x="";
           for(int j=0;j<m;j++)
              for(int y=0;y<rc;y++)
                x+=arr[i][j];

            for(int p=0;p<rl;p++)
               cout<<x<<endl;
        }
        cout<<endl;
    }
    return 0;
}
