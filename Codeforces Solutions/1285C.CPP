//in the name of allah

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
int main(){
    ios_base::sync_with_stdio(0);
    ll ans, x;
    cin >> x;
    for(ll i = 1 ; i * i <= x ; i++){
        if(x % i == 0 && lcm(i, x / i) == x){
            ans = i;
        }
    }
    cout << ans << " " << x / ans << endl;
    return 0;
}
