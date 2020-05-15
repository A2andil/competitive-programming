//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
vector<int> ans;
 
int main() {
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    while (n--) {
        int x, t = 10; cin >> x;
        while (x > 0) {
            if (x % t > 0) {
                ans.push_back(x % t);
                x -= x % t;
            }
            t *= 10;
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << (i == ans.size() - 1? "\n" : " ");
        ans.clear();
    }
    return 0;
}
