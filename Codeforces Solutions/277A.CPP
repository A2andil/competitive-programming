//in the name of allah
 
#include <iostream>
#include <algorithm>
#include <set>
 
typedef long long ll;
using namespace std;
 
set<int> s, langs;
ll dsu[105];
 
int max(int x, int y) {
    return x > y? x : y;
}
 
int find(int i) {
    if (dsu[i] == i) return i;
    return dsu[i] = find(dsu[i]);
}
 
int main(){
    ios_base::sync_with_stdio(0);
    for (int i = 0; i < 105; i++) dsu[i] = i;
    int n, m, ans = 0; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int k, parent; cin >> k;
        ans += k == 0;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;
            langs.insert(x);
            if (j == 0) parent = find(x);
            else if (find(x) != parent) dsu[find(x)] = parent;
        }
    }
    for (int j = 1; j <= m; j++) find(j);
    for (int i : langs) s.insert(dsu[i]);
    cout << ans + max(0, s.size() - 1) << endl;
    return 0;
}
