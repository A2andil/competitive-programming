//In The Name of Allah
#include <iostream>
#include <map>
#include <cmath>

using namespace std;
map<int,int> M;
int arr[1000005];
int main(){
   int n,m,i,j,x,res=0; cin>>n>>m;
   for(i=1;i<=n;i++){
       cin>>arr[i];
       res += i==1?0:arr[i]*arr[i-1];
   }

   res += arr[1]*arr[n];
   for(i=1;i<=m;i++){
       cin>>x;
       for(j=1;j<=n&&M[x]!=1;j++){
           if(abs(x-j)>1&&abs(x-j)!=n-1&&M[j]!=1)
               res += arr[x]*arr[j];
       }
       M[x] = 1;
   }
   cout<<res<<endl;
   return 0;
}
