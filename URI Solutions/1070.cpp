#include <iostream>

using namespace std;

int main()
{
 int x,count=0;
 while(cin>>x)
 {
     for(int i=x;count<6;i++)
         if(i%2!=0)
         {
             cout<<i<<endl;
             count++;
         }
 }
return 0;
}
