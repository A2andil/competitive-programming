//In The Name of Allah
#include <iostream>

using namespace std;

int main(){
    int n,m,count,i,j,index; cin>>n;
    string s,sub;
    while(n--){
        cin>>s>>m;
        for(i=0;i<m;++i){
            cin>>sub;
            index = 0,count=0;
            for(j=0;j<sub.length();j++){
                while(sub[j]!=s[index]&&index<s.length()){
                    index++;
                }
                if(sub[j]==s[index]) count++,index++;
            }
            cout<<(count==sub.length()?"Yes\n":"No\n");
        }
    }
    return 0;
}
