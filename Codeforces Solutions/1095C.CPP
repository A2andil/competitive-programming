//in the name of allah

#include <iostream>
#include <vector>
#include <stack>

typedef long long ll;
using namespace std;

stack<int> store;
vector<int> ans;

int main() {
    ios_base::sync_with_stdio(0);
    ll n, k; cin >> n >> k;
    for (ll i = 31; i >= 0; i--)
        if (n & 1 << i) store.push(1 << i);
    if (store.size() > k || n < k) {
        cout << "NO" << endl;
        return 0;
    }
    while (store.size() + ans.size() < k) {
        if (store.top() != 1) {
            int top = store.top();
            store.pop();
            store.push(top / 2), store.push(top / 2);
        }
        else {
            ans.push_back(store.top());
            store.pop();
        }
    }
    while (store.size() > 0) {
        ans.push_back(store.top());
        store.pop();
    }
    cout << "YES\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i == ans.size() - 1? "\n" : " ");
    }
    return 0;
}
