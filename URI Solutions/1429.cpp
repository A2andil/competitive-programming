//In The Name of Allah
#include <iostream>
using namespace std;

int fact(int c){
    if(c==1) return 1;
    return c*fact(c-1);
}

int main(){
    int n,cnt,ans;
    while(cin>>n&&n){
        cnt=1,ans=0;
        while(n>0){
           ans+=(n%10)*fact(cnt++);
           n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
