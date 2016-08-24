//In The Name of Allah
#include <iostream>
using namespace std;

int main(){
    int n,cnt=1,index,a;
    while(cin>>n&&n){
        bool ch =true;
        index=-1;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a==i&&ch){
               index=i;
               ch=false;
            }
        }
        cout<<"Teste "<<cnt++<<endl;
        cout<<index<<endl<<endl;
    }
    return 0;
}
