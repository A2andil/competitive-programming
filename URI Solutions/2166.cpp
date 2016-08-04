#include <iomanip>
#include<iostream>

using namespace std;

int main(){
   double t = 2;
   int r,i; cin>>r;

   for(i = 1; i < r; i++)
        t = 2 + 1.0 / t;

   cout<<fixed<<setprecision(10)<<
         (r!=0?1+1/t:1.0)<<endl;
   return 0;
}
