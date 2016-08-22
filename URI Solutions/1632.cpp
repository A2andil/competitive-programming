//In The Name of Allah
#include <iostream>
#include<map>

using namespace std;

map<char,int> M;

int main(){
    M['A']=M['E']=M['I']=M['O']=M['S']=3;
    long long n,ans;
    while(cin>>n){
        while(n--){
            ans=1;
            string v; cin>>v;
            int l=v.length();
            for(int i=0;i<l;i++){
                if(M[v[i]]==3||M[v[i]-32]==3)
                  ans*=3;
                else ans*=2;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}
