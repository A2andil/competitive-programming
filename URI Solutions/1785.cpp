//In The Name of Allah
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
#define oo 10e9
#define ll long long
using namespace std;
ll max(ll x){
    ll res=0,cnt[10]={0};
    while(x!=0){
        cnt[x%10]++;
        x/=10;
    }
    for(int i=9;i>=0;i--){
        while(cnt[i]--){
            res=res*10+i;
        }
    }
    return res;
}
ll min(ll x){
    ll res=0,cnt[10]={0};
    while(x!=0){
        cnt[x%10]++;
        x/=10;
    }
    for(int i=1;i<10;i++){
        while(cnt[i]--){
            res=res*10+i;
        }
    }
    return res;
}
ll power(int x){
    if(x==0) return 1;
    return 10*power(x-1);
}

int main(){
    int n,x,cnt,c=1; cin>>n;
    while(n--){
        cin>>x;
        cnt=0;
        while (x != 6174) {
            string v=to_string(x);
            x=(v.length()<4)?x*power(4-v.length()):x;
            int hi = max(x);
            int lo = min(x);
            if(!x){
                  cnt=-1;
                  break;
             }
             x = hi - lo;
             cnt = cnt + 1;
          }
          cout<<"Caso #"<<c++<<": "<<cnt<<endl;
       }
    return 0;
}
