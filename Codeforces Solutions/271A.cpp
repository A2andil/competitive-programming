#include <iostream>

using namespace std;

int main(){
    int y; cin>>y;
    for(int i=y+1;;i++){
       string v = to_string(i);
       if(v[0]!=v[1]&&v[0]!=v[2]&&v[0]!=v[2]&&v[0]!=v[3]
          &&v[1]!=v[2]&&v[1]!=v[3]&&v[1]!=v[4]
          &&v[2]!=v[3]&&v[2]!=v[4]
          &&v[3]!=v[4]){
           cout<<i<<endl;
           break;
       }
    }
    return 0;
}
