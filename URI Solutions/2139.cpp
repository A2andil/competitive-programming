//In The Name of Allah
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
#define oo 10e9
#define ll long long
using namespace std;

int main(){
    ll n,m,ch=25,rs;
    int month[11]={31,29,31,30,31,30,31,31,30,31,30};
    for(int i=0;i<11;i++) ch+=month[i];
    while(cin>>n>>m){
        rs=m;
        for(int i=0;i<n-1;i++) rs+=month[i];
        if(rs==ch) cout<<"E natal!\n";
        else if(rs==ch-1) cout<<"E vespera de natal!\n";
        else if(rs>ch) cout<<"Ja passou!\n";
        else cout<<"Faltam "<<ch-rs<<" dias para o natal!\n";
    }
    return 0;
}
