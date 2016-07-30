//In The Name of Allah
#include <iostream>

using namespace std;

int main(){
    int a,b,c,res;
    while(cin>>a>>b>>c){
        res=a+b+c;
        res=(res>=24)?res-24:(res<0)?res+24:res;
        cout<<res<<endl;
    }
    return 0;
}
