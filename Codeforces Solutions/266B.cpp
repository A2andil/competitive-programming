//In The Name of Allah
#include <iostream>
#define EV ""
using namespace std;

int main() {
    int n,t,cnt=0; cin>>n>>t;
    string v,rs; cin>>v;
   while(cnt<t){
        for(int i=0;i<n-1;i++){
            if(v[i]=='B'&&v[i+1]=='G'){
                v[i]='G',v[i+1]='B';
                i++;
            }
        }
        cnt++;
    }
   cout<<v<<endl;
    return 0;
}
