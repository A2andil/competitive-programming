#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   float num[100];
   for(int i=0;i<100;i++)
   {
       cin>>num[i];
       if(num[i]<=10)
          cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<num[i]<<endl;
   }

return 0;
}
