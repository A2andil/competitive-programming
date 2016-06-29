#include <iostream>

using namespace std;

int main()
{
 int nmon;
 string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    while(cin>>nmon)
    {
        if(nmon>=1&&nmon<=12)
            cout<<month[nmon-1]<<endl;
    }
    return 0;
}
