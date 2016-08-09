//In The Name of Allah
#include <iostream>
#include<map>

using namespace std;

string fact[10]={"","","2","3","223","5","53","7","7222","7332"};
int cnt[10]={0};

int main() {
  int n; cin>>n;
  string v,ans=""; cin>>v;

  for(int i=0;i<v.length();i++) ans+=(fact[v[i]-48]);
  for(int i=0;i<ans.length();i++) cnt[ans[i]-48]++;

  for(int i=9;i>=2;i--){
      for(int j=0;j<cnt[i];j++) cout<<i;
  }
  cout<<endl;
  return 0;
}
