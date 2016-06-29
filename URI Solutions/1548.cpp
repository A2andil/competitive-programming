#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n,m,count;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       count=0;
       cin>>m;
       int arr_o[m],arr_n[m];
       for(int ii=0;ii<m;ii++)
       {
           cin>>arr_o[ii];
           arr_n[ii]=arr_o[ii];
       }

       sort(arr_n,arr_n + m);

       for(int ii=0;ii<m;ii++)
         if(arr_n[m-ii-1]==arr_o[ii])
              count++;
       cout<<count<<endl;
   }
    return 0;
}
