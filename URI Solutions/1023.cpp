//In The Name of Allah
#include <iostream>
#include<map>
#include<iomanip>
#define SN ""
using namespace std;

int main(){
    long long n,x,y,nx,ny,cnt=1;
    while(cin>>n&&n){
        if(cnt!=1) cout<<endl;
        map<int,int> M;
        nx=0,ny=0;
        while(n--){
            cin>>x>>y;
            nx+=x,ny+=y,M[y/x]+=x;
        }

        cout<<"Cidade# "<<cnt++<<":\n";
        string v=SN;
        map<int,int>::iterator it;
        for(it = M.begin();it!=M.end();it++)
            v+=to_string(it->second)+"-"+to_string(it->first)+" ";

        v=v.substr(0,v.length()-1);
        cout<<v<<endl;
        long long res=ny*100/nx;
        cout<<"Consumo medio: "
           <<fixed<<setprecision(2)<<res/100.0<<" m3.\n";
    }
    return 0;
}
