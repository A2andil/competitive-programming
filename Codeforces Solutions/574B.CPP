//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
 
typedef long long ll;
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    ll n, k, x = 1, step = 1; cin >> n >> k;
    while (step + x - k != n) {
       step += 1, x += step;
    }
    cout << x - k << endl;
    return 0;
}
