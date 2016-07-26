#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    double res;
    cin>>n;
    res =(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    cout<<fixed<<setprecision(1)<<res<<endl;
    return 0;
}
