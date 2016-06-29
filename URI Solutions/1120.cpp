#include <iostream>
using namespace std;

int main()
{
    double res;
    char x;
    string y,z;
    while(cin>>x>>y)
    {
        z="";
        if(x=='0'&&y[0]=='0')
            break;

        for(int i=0;i<y.length();i++)
        {
            if(y[i]!=x)
                z+=y[i];
        }
        if(z=="")
            z+='0';

        int s=z.length()-1;

        for(int i=0;i<=s;i++)
         {
            if(z[i]!='0')
               {
                 z=z.substr(i,z.length()-i);
                 break;
               }
               else if(i==s)
                z="0";
         }
        for(int i=0;i<z.length();i++)
            cout<<z[i]-'0';

        cout<<endl;
    }
    return 0;
}
