#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int R;
   double pi=3.14159;

   cin>>R;
   cout<<"VOLUME = "<<fixed<<setprecision(3)<<(4/3.0*pi*R*R*R)<<endl;

   return 0;
   
}
