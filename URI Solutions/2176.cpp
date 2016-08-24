//In The Name of Allah
#include <iostream>
#include<map>
using namespace std;

map<string,int> M;

int main(){
    int cnt=0;
    string v; cin>>v;
    for(int i=0;i<v.length();i++){
        if(v[i]==49) cnt++;
    }
    if(cnt%2==0) cout<<v+"0\n";
    else cout<<v+"1\n";
    return 0;
}
