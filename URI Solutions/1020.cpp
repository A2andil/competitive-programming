#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int t,y,m,d;
    while(cin>>t)
    {
        y = t / 365;
        m = (t - y*365) / 30;
        d = t -(y*365 + m *30);

        cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)\n";
    }
    
    return 0;
}
