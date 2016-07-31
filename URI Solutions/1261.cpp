//In The Name of Allah
#include <iostream>
#include<map>
using namespace std;
typedef long long LL;
typedef int I;
typedef string Str;

map<Str,I> M;
int main(){
    I n,m,v,res=0,j; cin>>n>>m;
    Str k,text;
    while (n--) {
        cin>>k>>v;
        M[k]=v;
    }

    while(m--){
        map<I,Str> N;
        text ="",j=0,res=0;
        char c;
        while(cin>>noskipws>>c){
            if(c=='.') break;
            if(c==' '||c=='\n'){
                N[j++]=text;
                text ="";
                continue;
            }
            text +=c;
        }

        for(int i=0;i<j;i++) res += M[N[i]];

        cout<<res<<endl;
    }

    return 0;
 }
