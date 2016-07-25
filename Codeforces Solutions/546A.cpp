#include <iostream>

using namespace std;

int main()
{
    int k,n,w,res;
    cin>>k>>n>>w;
    res = (w*(w+1)/2)*k-n;
    cout<<(res>=0?res:0)<<endl;
    return 0;
}
