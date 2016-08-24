//In The Name of Allah
#include <iostream>
#include<map>
using namespace std;

map<string,int> M;

int main(){
    int n,max=151,cnt=0; cin>>n;
    while(n--){
        string v; cin>>v;
        M[v]++;
    }
    map<string,int>::iterator it;
    for(it=M.begin();it!=M.end();it++){
        if(it->second!=0)
            cnt++;
    }
    cout<<"Falta(m) "<<max-cnt<<" pomekon(s).\n";
    return 0;
}
