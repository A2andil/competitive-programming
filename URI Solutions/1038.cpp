#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   float product[5]={4.00,4.50,5.00,2.00,1.50};
   int id,num;
   while(cin>>id>>num)
	  cout<<"Total: R$ "<<fixed<<setprecision(2)<<product[id-1]*num<<endl;
return 0;
}
