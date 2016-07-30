//In The Name of Allah
#include <iostream>
#include<algorithm>
using namespace std;

int mar[10005],srch[10005];

int search(int k,int n){
    int low=0,hi=n-1,mid,res=-1;
    while(low<=hi){
        mid = (low+hi)/2;
        if(k==mar[mid]) res=mid,hi=mid-1;
        else if(k<mar[mid]) hi=mid-1;
        else if(k>mar[mid]) low=mid+1;
    }
    return res;
}

int main(){
    int m,q,i,index,cas=1;
    while(cin>>m>>q){
        if(m==0&&q==0) break;
        for(i=0;i<m;i++) cin>>mar[i];
        for(i=0;i<q;i++) cin>>srch[i];

        sort(mar,mar+m);

        cout<<"CASE# "<<cas++<<":\n";
        for(i=0;i<q;i++){
            index = search(srch[i],m);
            if(index!=-1) cout<<srch[i]<<" found at "<<index+1<<endl;
            else cout<<srch[i]<<" not found\n";
        }
    }

    return 0;
}
