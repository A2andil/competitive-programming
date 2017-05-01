// in the name of God

#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <string>
#include <iostream>

#define all(v)              v.begin(), v.end()
#define min3(a, b, c)       min(a, min(b, c))
#define max3(a, b, c)       max(a, max(b, c))
#define pi                  3.14159265358979323846
#define sz(x)               x.size()
#define pb                  push_back
#define ll                  long long
#define mp                  make_pair
#define oo                  (int)1e9 + 7
#define ln                  "\n"

inline ll llMax(ll a, ll b) { return a > b ? a : b; }
inline ll llMin(ll a, ll b) { return a > b ? b : a; }

using namespace std;

ll ans;

struct Node {
        int from, to, dist;
};

const int N = 2 * 1e5 + 5;
int k[N], s[N];
vector<Node> v;

bool cmp(const Node &a, const Node &b) {
        return a.dist < b.dist ? true : false;
}

int find(int x) {
        while (x != k[x]) {
                x = k[x];
        }
        return x;
}

bool same(int a, int b) {
        return find(a) == find(b);
}

void Union(int a, int b) {
        a = find(a), b = find(b);
        if (s[a] < s[b]) swap(a, b);
        s[a] += s[b];
        k[b] = a;
}

void Kruskal(int n) {
        for (int i = 0; i < n; i++)
                k[i] = i, s[i] = 1;
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size(); i++) {
                if (!same(v[i].from, v[i].to)) {
                        Union(v[i].from, v[i].to);
                        ans -= v[i].dist;
                }
        }
}

int main(){
        ios::sync_with_stdio(false);
        int n, m;
        while (cin >> n >> m && (n + m)) {
                ans = 0;
                v.clear();
                for (int i = 0; i < m; i++) {
                        Node nd; cin >> nd.from >> nd.to >> nd.dist;
                        ans += nd.dist;
                        v.push_back(nd);
                }
                Kruskal(n);
                cout << ans << endl;
        }
        return 0;
}
