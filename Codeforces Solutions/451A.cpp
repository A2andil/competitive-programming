//In The Name of Allah
#include <iostream>
using namespace std;
int main(){
    int n,m,rs,cnt;
    while(cin>>n>>m){
        rs=n+m,cnt=0;
        while(rs>=2&&n>0&&m>0){
            rs-=2,n--,m--;
            cnt++;
        }
        if(cnt%2==1) cout<<"Akshat\n";
        else cout<<"Malvika\n";
    }
    return 0;
}
