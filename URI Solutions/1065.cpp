#include <iostream>

using namespace std;

int main()
{
   int num[5];
   int count=0;
   for(int i=0;i<5;i++)
   {
     cin>>num[i];
     if(num[i]%2==0)
        count++;
   }
   cout<<count<<" valores pares"<<endl;
return 0;
}
