#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n; cin>>n;
    cout<<fixed<<setprecision(1)<<(n/log(n))<<' '<<1.25506*(n/log(n))<<endl;
    return 0;
}
