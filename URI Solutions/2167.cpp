#include <iostream>
using namespace std;

int ans[100];

int main(){
    int n,max=-1; cin>>n>>ans[0];

    for(int i=1;i<n;i++){
        cin>>ans[i];
        if(ans[i]<ans[i-1]){
            max=i;
            break;
        }
    }
    cout<<max+1<<endl;
    return 0;
}

