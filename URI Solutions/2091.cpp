//In The Name of Allah
#include <iostream>
#include<map>
using namespace std;

int main(){
    long long n,a;
    while(cin>>n){
        if(n==0) break;
        map<long long,int> M;
        for(int i=0;i<n;i++){
            cin>>a;
            M[a]++;
        }

        map<long long,int>::iterator it;
        for(it=M.begin();it!=M.end();it++)
            if(it->second%2==1){
                cout<<it->first<<endl;
                break;
            }
    }
    return 0;
}
