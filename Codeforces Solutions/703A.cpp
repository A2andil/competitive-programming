//In The Name of Allah
#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
   int n,a,b,cm=0,cc=0; cin>>n;
   while (n--) {
       cin>>a>>b;
       if(a>b) cm++;
       else if(a<b) cc++;
   }
   cout<<(cm>cc?"Mishka":
                (cm!=cc?"Chris":"Friendship is magic!^^"))<< endl;
   return 0;
}
