//In The Name of Allah
#include <iostream>
#include<cmath>
#define ll long long
using namespace std;

struct Node{
    ll v,r;
};

Node data[10005];
void insertionSort(ll m,ll n){
    for(ll i=1;i<n;i++){
        ll j=i-1;
        Node Elm=data[i];
        while(j>=0&&(Elm.r<data[j].r)){
           data[j+1]=data[j];
           j--;
        }
        //resort
        while(j>=0&&Elm.r==data[j].r){
            if(abs(Elm.v%2)==1&&data[j].v%2==0){
                data[j+1]=data[j];
                j--;
            }
            else if((abs(Elm.v%2)==1&&abs(data[j].v%2)==1)&&
                    (Elm.v>data[j].v)){
                data[j+1]=data[j];
                j--;
            }
            else if((Elm.v%2==0&&data[j].v%2==0)&&
                    (Elm.v<data[j].v)){
                data[j+1]=data[j];
                j--;
            }
            else break;
        }
        data[j+1]=Elm;
    }
}

int main(){
    ll n,m;
    while(cin>>n>>m&&n&&m){
        for(ll i=0;i<n;i++){
            cin>>data[i].v;
            data[i].r=data[i].v%m;
        }
        insertionSort(m,n);
        cout<<n<<' '<<m<<endl;
        for(ll i=0;i<n;i++){
            cout<<data[i].v<<'\n';
        }
    }
    cout<<0<<' '<<0<<endl;

    return 0;
}
