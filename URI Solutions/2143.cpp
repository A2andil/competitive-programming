//In The Name of Allah
#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n,m;
    while(cin>>n&&n){
        for(int i=0;i<n;i++){
            cin>>m;
            cout<<(m%2==1?2*m-1:2*m-2)<<endl;
        }
    }
    return 0;
}
