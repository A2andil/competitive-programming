//In The Name of Allah
#include <iostream>
#define ll long long
using namespace std;

ll power(int x){
    if(x==0) return 1;
    return 10*power(x-1);
}

ll find(int n){
    return 45*power(n)+(n?10*find(n-2):0);
}

int main(){
    ll k,rs,rm,cnt[4]; cin>>k;
    cnt[1]=0,cnt[2]=36,cnt[3]=360;
    if(k<4) cout<<cnt[k]<<endl;
    else{
        rm=(k%2),k-=rm;
        rs=36*power(k-2)+9*find(k-4);
        cout<<rs*(rm?10:1)<<endl;
    }
    return 0;
}
