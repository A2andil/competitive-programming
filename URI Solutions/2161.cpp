#include <iomanip>
#include<iostream>

using namespace std;

int main(){
   double t = 6;
   int r,i; cin>>r;

   for (i = 1; i < r; i++)
      t = 6 + 1.0 / t;

   cout<<fixed<<setprecision(10)<<
         (r!=0?3+1/t:3.0)<<endl;
   return 0;
}
