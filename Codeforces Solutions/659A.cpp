#include <iostream>

using namespace std;

int main()
{
   int n,a,b,res,mov;
   while(cin>>n>>a>>b)
   {
      res=(a+b)%n;
      if(b<0)
    {
        mov=(-b%n);
        res=(mov<=a)?a-mov:n+(a-mov);
    }

        if(res==0)
            res=n;
            
       cout<<res<<endl;
   }
    return 0;
}
