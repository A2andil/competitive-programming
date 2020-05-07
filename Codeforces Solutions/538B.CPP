//in the name of allah

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int N; cin >> N;
    vector<int> a;
    while (N) {
        int n = N, m = 0, p = 1;
        while (n) {
            if (n % 10) m += p;
             n /= 10; p *= 10;
        }
        a.push_back(m);
        N -= m;
     }
     cout << a.size() << '\n';
     sort(a.begin(), a.end());
     for (int x: a) cout << x << ' ';
     cout << '\n';
    return 0;
}
