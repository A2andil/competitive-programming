#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int ii=0;ii<=n;ii++)
    {
         string x;
         getline(cin,x);
         char arr[x.length()];
         for(int i=0;i<x.length();i++)
         {
              if(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')
              x[i]+=3;
              arr[x.length()-i-1]=x[i];
         }
         for(int i=0;i<x.length();i++)
         {
          if(i>=x.length()/2)
            arr[i]--;
          cout<<arr[i];
          if(i==x.length()-1)
            cout<<endl;
         }
    }
    return 0;
}

