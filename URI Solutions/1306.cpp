//In The Name of Allah
#include <iostream>
using namespace std;

int main(){
    long long r,n,cnt=1,rs;
    while(cin>>r>>n&&r&&n){
        cout<<"Case "<<cnt++<<": ";
        rs=n;
        if(rs>=r) cout<<0<<endl;
        else
        for(int i=1;i<27;i++){
            rs+=n;
            if(rs>=r){
                cout<<i<<endl;
                break;
            }
            else if(i==26) cout<<"impossible\n";
        }
    }
    return 0;
}
