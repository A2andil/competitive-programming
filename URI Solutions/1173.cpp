#include <iostream>

using namespace std;

int main()
{

   int x;
   int num[10];
   cin>>x;
   for(int i=x,ii=0;ii<10;i*=2,ii++)
   {
     num[ii]=i;
     cout<<"N["<<ii<<"] = "<<i<<endl;
   }
return 0;
}
