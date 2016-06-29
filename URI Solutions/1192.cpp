#include <iostream>

using namespace std;

int main()
{
   int n,x,y;
   char m;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x>>m>>y;
       if(x==y)
          cout<<x*y<<endl;
       else if(m>='a'&&m<='z')
           cout<<x+y<<endl;
       else if(m>='A'&&m<='Z')
            cout<<y-x<<endl;
   }
    return 0;
}
