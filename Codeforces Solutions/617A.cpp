#include <iostream>

using namespace std;

int main()
{
   long long x,y;
   while(cin>>x)
   {
       y=x/5;
       if(x%5!=0)
         y++;
           cout<<y<<endl;
   }
   
    return 0;
}
