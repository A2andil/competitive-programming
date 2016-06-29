#include <iostream>

using namespace std;

int main()
{
   string x,y,l;
   int carry=0,count,res;
   while(cin>>x>>y)
   {
       if(x=="0"&&y=="0")
        break;

       count =0;
       carry=0;
       l="";

       if(x.length()<y.length())
       {
           for(int i=0;i<y.length()-x.length();i++)
              l+='0';
            x=l+x;
       }
       else if(x.length()>y.length())
       {
           for(int i=0;i<x.length()-y.length();i++)
              l+='0';
            y=l+y;
       }



      for(int i=x.length()-1;i>=0;i--)
      {
          res=(x[i]-'0')+(y[i]-'0')+carry;
          if(res>=10)
          {
              count++;
              carry=(res/10);
          }
          else
            carry=0;
      }
      if(count==0)
          cout<<"No carry operation."<<endl;
      else if(count==1)
        cout<<count<<" carry operation."<<endl;
      else
        cout<<count<<" carry operations."<<endl;
   }
    return 0;
}
