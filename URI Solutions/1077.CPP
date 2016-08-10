//In The Name of Allah
#include <iostream>
#include<stack>
#include<map>

using namespace std;

map<char,int> M;

int main(){
    M['(']=M[')']=4,M['^']=3,M['*']=M['/']=2,M['+']=M['-']=1;
    int n; cin>>n;
    while(n--){
        string v,ans=""; cin>>v;
        stack<char> Stack;
        for(unsigned int i=0;i<v.length();i++){
            if(!M[v[i]]) ans+=v[i];
            else{
                while(!Stack.empty()&&M[Stack.top()]>=M[v[i]]&&
                      Stack.top()!='('){
                      ans+=Stack.top();
                      Stack.pop();
                }
                Stack.push(v[i]);
                if(Stack.top()==')'){
                    while(!Stack.empty()){
                        Stack.pop();
                        if(Stack.top()!='(') ans+=Stack.top();
                        else break;
                    }
                    Stack.pop();
                }
            }
        }
        while(!Stack.empty()){
            ans+=Stack.top();
            Stack.pop();
        }
        cout<<ans<<endl;
    }

    return 0;
}
