#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   float a,b,c;
   while(cin>>a>>b>>c)
   {
   	if(a+b>c&&a+c>b&&a<b+c)
   	    cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
   	else
   	    cout<<"Area = "<<fixed<<setprecision(1)<<c*(a+b)/2<<endl;
   }
return 0;
}
