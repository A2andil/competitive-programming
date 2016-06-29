#include <iostream>
using namespace std;
int main()
{
   int n;
   while(cin>>n)
      {
         for(int i=0;i<n;i++)
         {
            if(i==n-1)
             {
               cout<<"Ho!"<<endl;
               break;
             }
            cout<<"Ho ";
         }
      }
return 0;
}