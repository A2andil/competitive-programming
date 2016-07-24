#include <iostream>

using namespace std;

#define LL long long

int main()
{
    LL n,m,arr[6] = {2,5,10,20,50,100};
    bool pos;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;

        pos = false;

        for(int i=0;i<6;i++)
            for(int j=i+1;j<6;j++)
                if(arr[i]+arr[j]==m-n)
                    pos = true;

        cout<<((pos)?"possible\n":"impossible\n");
    }


    return 0;
}
