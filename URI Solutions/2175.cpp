//In The Name of Allah
#include <iostream>
#include<map>
using namespace std;

map<string,int> M;

int main(){
    float x,y,z; cin>>x>>y>>z;
    if(x<y&&x<z) cout<<"Otavio\n";
    else if(y<x&&y<z) cout<<"Bruno\n";
    else if(z<x&&z<y) cout<<"Ian\n";
    else cout<<"Empate\n";
    return 0;
}
