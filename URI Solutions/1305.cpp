#include <iostream>
#include<sstream>
using namespace std;

double string_to_double(string& s)
 {
   istringstream i(s);
   double x;
   if (!(i >> x))
     return 0;
   return x;
 }
int main()
{
    string x,y;
    int res;
    double xx,yy;
    while(cin>>x)
    {
        if(x=="EOF")
            break;
        cin>>y;
        res=string_to_double(x);
        xx=string_to_double(x)-res;
        yy=string_to_double(y);
        if(xx>yy)
            res++;
        cout<<res<<endl;

    }
    return 0;
}
