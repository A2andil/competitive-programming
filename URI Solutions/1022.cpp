//In The Name of Allah
#include <iostream>
typedef long long LL;
using namespace std;

struct Number{
    int P,M;
};
void print(LL p,LL m){
    cout<<p<<'/'<<m<<" = ";
    LL i,s=(p<m)?p:m;

    for(i=(s<0?-s:s);i>=2;i--){
       if(p%i==0&&m%i==0){
          p/=i;
          m/=i;
          break;
       }
    }
    cout<<p<<'/'<<m<<endl;
}

int main(){
    Number one,two;
    char d,s;
    LL n,p,m; cin>>n;
    while(n--){
        cin>>one.P>>d>>one.M>>s>>two.P>>d>>two.M;
        switch(s){
            case '+':
                p=one.P*two.M+two.P*one.M;
                m=one.M*two.M;
                print(p,m);
                break;
            case '-':
                p=one.P*two.M-two.P*one.M;
                m=one.M*two.M;
                print(p,m);
                break;
            case '*':
                p=one.P*two.P;
                m=one.M*two.M;
                print(p,m);
                break;
            case '/':
                p=one.P*two.M;
                m=one.M*two.P;
                print(p,m);
                break;
        }
    }
    return 0;
}
