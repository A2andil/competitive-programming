//In The Name of Allah
#include <iostream>

using namespace std;

int main(){
    int cnt=1;
    string v;
    while(getline(cin,v)){
        for(int i=0;i<v.length();i++){
            if(v[i]!='\"') cout<<v[i];
            else{
                if(cnt%2==1) cout<<"``";
                else cout<<"''";
                cnt++;
            }
        }
        cout<<endl;
    }
    return 0;
}
