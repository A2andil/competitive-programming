//In The Name of Allah
#include <iostream>

using namespace std;

int main() {
  int n,m; cin>>n>>m;
  while(m--){
      string v; cin>>v;
      if(v=="fechou") n++;
      else n--;
  }
  cout<<n<<endl;
  return 0;
}
