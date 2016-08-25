//In The Name of Allah
#include <iostream>
using namespace std;
int ans[105];
int main(){
    int n,mxi,mni,rs; cin>>n;
    mxi=1,mni=1;
    for(int i=1;i<=n;i++){
        cin>>ans[i];
        if(ans[i]>ans[mxi]){
            mxi=i;
        }
        if(ans[i]<=ans[mni]){
            mni=i;
        }
    }
    if(mxi<mni) rs=mxi-1+n-mni;
    else rs=mxi-1+n-mni-1;
    cout<<rs<<endl;

    return 0;
}
