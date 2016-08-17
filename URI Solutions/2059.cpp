//In The Name of Allah
#include <iostream>

using namespace std;

int main(){
    int p1,j1,j2,c,a,sum; cin>>p1>>j1>>j2>>c>>a;
    sum = j1+j2;
    if((c!=1||a!=1)&&((sum%2==0&&p1)||(sum%2==1&&!p1)||(c&&!a))){
        cout<<"Jogador 1 ganha!\n";
    }
    else{
        cout<<"Jogador 2 ganha!\n";
    }
    return 0;
}
