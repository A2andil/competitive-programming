#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n,h,m,a; cin>>n;
    while(n--){
        cin>>h>>m>>a;
        cout<<(h>9?"":"0")<<h<<':'<<(m>9?"":"0")<<m;
        cout<<(a==1?" - A porta abriu!\n":" - A porta fechou!\n");
    }
    return 0;
}
