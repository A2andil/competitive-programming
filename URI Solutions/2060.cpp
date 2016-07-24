#include <iostream>
#include<iomanip>
using namespace std;

#define LL long long

int main()
{
    LL n,v;
    cin>>n;
    LL arr[6] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>v;
        for(int j=2;j<=5;j++)
            if(v%j==0)
                arr[j]++;
    }

    for(int i=2;i<6;i++)
        cout<<arr[i]<<" Multiplo(s) de "<<i<<endl;


    return 0;
}
