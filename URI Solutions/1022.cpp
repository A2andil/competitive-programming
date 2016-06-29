#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d,past,mak,s,n;
    char op1,op2,op3;
    cin>>n;
    for(int h=0;h<n;h++)
    {
       cin>>a>>op1>>b>>op2>>c>>op3>>d;
       if(op2=='+'||op2=='-')
       {
           a=a*d;
           c=c*b;
           d=b*d;

           if(op2=='+')
             past=a+c;
           else if(op2=='-')
              past=a-c;

           mak=d;
           if(past<mak)
            s=past;
           else
            s=mak;

           if(s<0)
            s*=-1;
           for(int i=s;i>=2;i--)
           {
               if(past%i==0&&mak%i==0)
                  {
                     past/=i;
                     mak/=i;
                     break;
                  }
           }
           if(op2=='+')
               cout<<a+c<<"/"<<d<<" = "<<past<<"/"<<mak<<endl;
           else
               cout<<a-c<<"/"<<d<<" = "<<past<<"/"<<mak<<endl;

       }
       else
       {
           if(op2=='*')
           {
               past=a*c;
               mak=b*d;
               cout<<past<<"/"<<mak<<" = ";

               if(past<mak)
                 s=past;
               else
                 s=mak;

               if(s<0)
                 s*=-1;
               for(int i=s;i>=2;i--)
               {
                  if(past%i==0&&mak%i==0)
                  {
                     past/=i;
                     mak/=i;
                     break;
                  }
               }
            cout<<past<<"/"<<mak<<endl;
           }
           else
            {
                past=a*d;
                mak=b*c;
                 cout<<past<<"/"<<mak<<" = ";

               if(past<mak)
                 s=past;
               else
                 s=mak;

               if(s<0)
                 s*=-1;
               for(int i=s;i>=2;i--)
               {
                  if(past%i==0&&mak%i==0)
                  {
                     past/=i;
                     mak/=i;
                     break;
                  }
               }
            cout<<past<<"/"<<mak<<endl;

            }
       }
    }
    return 0;
}
