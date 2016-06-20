#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int t,h,m,s;
    while(cin>>t)
    {
        h = t / 3600;
        m = (t - h*3600)/60;
        s = t -(h*3600 + m *60);
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    return 0;
}
