//In The Name of Allah
#include <iostream>
#include<map>
#define oo 10e18
#define ll long long
using namespace std;

//const int Max=21;
ll ans[21][42];

int main(){
    int k; cin>>k;
    for(int i=0;i<21;i++)
        for(int j=0;j<42;j++) ans[i][j]=0;

    ans[0][21]=1;
    for(int i=1;i<21;i++)
        for(int j=0;j<42;j++){
            ans[i][j]=ans[i-1][j]+
                    (j-1>=0?ans[i-1][j-1]:0)+(j+1<41?ans[i-1][j+1]:0);
        }

   ll rs=0;
   for(int j=0;j<42;j++){
      rs+=ans[k][j];
    }
   cout<<rs<<endl;

    return 0;
}
