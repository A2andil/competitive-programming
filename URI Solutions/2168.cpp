#include <iostream>
using namespace std;

int ans[101][101];

int main(){
    int n,i,j,count; cin>>n;

    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++) cin>>ans[i][j];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            count=0;
            count=ans[i][j]+ans[i][j+1]+ans[i+1][j]+ans[i+1][j+1];
            cout<<(count>=2?'S':'U');
        }
        cout<<endl;
    }
    return 0;
}
