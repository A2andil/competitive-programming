#include <iostream>
#include<iomanip>
using namespace std;

#define LL long long

int main()
{
    LL n;
    double res;
    string v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        res = v.length()*0.01;
        cout<<fixed<<setprecision(2)<<res<<endl;

    }
    return 0;
}
