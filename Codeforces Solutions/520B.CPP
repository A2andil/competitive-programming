//in the name of allah

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, ans, hp;
    while(cin >> n >> m) {
       if (n >= m) ans = n - m;
       else {
           ans = 0; hp = m;
           while (hp > n) {
              if (hp % 2) hp += 1;
              else hp /= 2;
              ans++;
           }
           ans += (n - hp);
       }
       cout << ans << endl;
    }
    return 0;
}
