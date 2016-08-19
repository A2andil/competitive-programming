//In The Name of Allah
#include <iostream>
#define ll long long
using namespace std;
int peaks[105],cnt[105]={0};
int main(){
    int n; cin>>n>>peaks[1];
    for(int i=2;i<=n;i++){
        cin>>peaks[i];
        if(peaks[i]>peaks[i-1])
            cnt[i]=1;
        else if(peaks[i]<peaks[i-1])
            cnt[i]=0;
        else cnt[i]=-1;
    }
    bool chck=true;
    for(int i=2;i<=n;i++)
        if(cnt[i]==-1){
            chck=false;
            break;
        }
    cout<<(chck?1:0)<<endl;
    return 0;
}
