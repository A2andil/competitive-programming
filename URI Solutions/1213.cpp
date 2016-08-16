//In The Name of Allah
#include <iostream>
using namespace std;

int ones(int n){
    int ans=1,cnt=1;
    while(ans%n!=0){
        ans = ans*10+1;
        ans %=n,cnt++;
    }
    return cnt;
}

int main(){
    int n;
    while(cin>>n){
        cout<<ones(n)<<endl;
    }
    return 0;
}
