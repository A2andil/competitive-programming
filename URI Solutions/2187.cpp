//In The Name of Allah
#include <iostream>

using namespace std;

int main(){
    unsigned int n,cnt=1,nt[4]={50,10,5,1};
    while(cin>>n&&n){
        cout<<"Teste "<<cnt++<<endl;
        for(int i=0;i<4;i++){
            int rs=0;
            rs=n/nt[i],n%=nt[i];
            cout<<rs<<(i!=3?' ':'\n');
        }
        cout<<endl;
    }
    return 0;
}
