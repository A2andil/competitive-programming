#include <iostream>

using namespace std;

int main()
{
    int m,l,n;
    string name,x,y;
    cin>>n;
    getline(cin,name);
    for(int ii=0;ii<n;ii++)
    {
          getline(cin,name);
          l=name.length();
          m=l/2;
          x=name.substr(0,m);
          y=name.substr(m,l-m);
          for(int i=m-1;i>=0;i--)
              cout<<x[i];
          for(int i=y.length()-1;i>=0;i--)
              cout<<y[i];
          cout<<endl;
    }
    return 0;
}
