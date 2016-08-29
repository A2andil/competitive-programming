//IN THE NAME OF ALLAH
#include <iostream>
using namespace std;
long long power(int b,int n) {
    if(n==1) return b;
    return b*power(b,n-1);
}
int main() {
    long long n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        res+=power(2,i);

    cout<<res<<endl;
    return 0;
}
