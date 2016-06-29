#include <iostream>

using namespace std;

int main()
{
   string l1="`1234567890-=",l2="QWERTYUIOP[]\\",l3="ASDFGHJKL;'",l4="ZXCVBNM,./",name;
   bool valid;
   while(getline(cin,name))
   {
           for(int i=0;i<name.size();i++)
   {
       valid=true;
       if(name[i]==' ')
       {
           cout<<name[i];
           continue;
       }
       for(int ii=1;ii<l1.length();ii++)
       {
           if(name[i]==l1[ii])
           {
               cout<<l1[ii-1];
               valid=false;
               break;
           }
       }
       for(int ii=1;ii<l2.length()&&valid;ii++)
       {
            if(name[i]==l2[ii])
           {
               cout<<l2[ii-1];
               valid=false;
               break;
           }
       }
       for(int ii=1;ii<l3.length()&&valid;ii++)
       {
            if(name[i]==l3[ii])
            {
               cout<<l3[ii-1];
               valid=false;
               break;
            }
       }
       for(int ii=1;ii<l4.length()&&valid;ii++)
       {
            if(name[i]==l4[ii])
            {
               cout<<l4[ii-1];
               valid=false;
               break;
            }
       }

   }
   cout<<endl;
   }
    return 0;
}
