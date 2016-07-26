#include <iostream>

using namespace std;

int main()
{
    string v;
    getline(cin,v);
    cout<<(v.length()>80?"NO\n":"YES\n");

    return 0;
}
