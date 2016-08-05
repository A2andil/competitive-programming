#include <iostream>
using namespace std;

int ans[1000][1000];

int main(){
    int n,m; cin>>n>>m;
    bool print=true;

    for(int i=0;i<n;i++)
       for(int j=0;j<m;j++) cin>>ans[i][j];

    for(int i=1;i<n-1;i++)
       for(int j=1;j<m-1;j++){
           if(ans[i][j]==42){
               if(7==ans[i-1][j-1]&&7==ans[i-1][j]&&7==ans[i-1][j+1]
                  &&7==ans[i][j-1]&&7==ans[i][j+1]
                  &&7==ans[i+1][j-1]&&ans[i+1][j]&&7==ans[i+1][j+1]){
                     cout<<i+1<<' '<<j+1;
                     j=m,i=n,print=false;
               }
           }
       }
    cout<<(print?"0 0\n":"\n");
    return 0;
}
