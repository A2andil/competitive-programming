#include <iostream>

using namespace std;

int main()
{
   int n,max=0;
   cin>>n;
       int x[n];
       for(int i=0;i<n;i++)
       {
           cin>>x[i];
           if(x[i]>max)
                max=x[i];
       }

       int r[max+1];
       for(int i=0;i<=max;i++)
           r[i]=0;

       for(int i=0;i<n;i++)
           r[x[i]]++;

       for(int i=0;i<=max;i++)
       {
           if(r[i]!=0)
              cout<<i<<" aparece "<<r[i]<<" vez(es)"<<endl;
       }

return 0;
}
