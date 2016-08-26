//IN THE NAME OF ALLAH
#include <iostream>
#define SP ' '
using namespace std;

int main(){
    int n,s,cnt=0,m,mx[10]={0},min[10]={0}; cin>>n>>s;
    m=s;
    if(s==0){
        cout<<(n==1 ? "0 0\n":"-1 -1\n");
    }
    else if(9*n<s) cout<<"-1 -1\n";
    else{
        for(int i=9;i>0;i--){
            mx[i]=m/i;
            m%=i;
            cnt+=mx[i];
        }
        mx[0]=n-cnt;
        if(cnt==n){
            for(int i=1;i<10;i++){
                int c=mx[i];
                while(c--){
                    cout<<i;
                }
            }
        }
        else if(cnt<n){
            m=s-1,min[1]=1,cnt=0;
            for(int j=9;j>0;j--){
                min[j]+=m/j;
                m%=j;
                cnt+=min[j];
            }
            min[0]=n-cnt;
            cout<<1; min[1]--;
            for(int i=0;i<10;i++){
                int c=min[i];
                while(c--){
                    cout<<i;
                }
            }
        }
        cout<<SP;
        for(int i=9;i>=0;i--){
            int c=mx[i];
            while(c--){
                cout<<i;
            }
        }
        cout<<endl;
    }

    return 0;
}
