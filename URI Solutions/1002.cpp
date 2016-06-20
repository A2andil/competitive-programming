#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     const double pi=3.14159;
     double r,a;
     while(cin>>r)
     {
         a=pi*r*r;
         cout<<"A="<<fixed << setprecision(4)<<a<<endl;
     }
return 0;
}
