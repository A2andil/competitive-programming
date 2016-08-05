#include <iostream>
#include<map>
#include<iomanip>
using namespace std;

int main(){
    int n,m,q; cin>>n;
    double p,res;
    string v;

    while(n--){
        map<string,double> M;
        res = 0;
        cin>>m;
        while(m--){
            cin>>v>>p;
            M[v]=p;
        }
        cin>>m;
        while(m--){
            cin>>v>>q;
            res +=q*M[v];
        }
        cout<<"R$ "<<fixed<<setprecision(2)<<res<<endl;
    }
    return 0;
}
