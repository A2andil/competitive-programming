//in the name of allah

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> ans;
map<int, int> mp;

void solve(int x) {
    if (x == 0) return;
    for (int i = x; i >= 2; i--) {
        if (i == 7 || i == 5 || i == 3 || i == 2) {
            ans.push_back(i);
            break;
        }
        else {
            int tmp = i;
            while (tmp % 2 == 0 || tmp % 3 == 0) {
                if (tmp % 2 == 0) {
                    mp[2]++;
                    tmp /= 2;
                }
                else {
                    mp[3]++;
                    tmp /= 3;
                }
            }
        }
    }
}

void fill() {
    for (int i = 0; i < mp[3]; i++)
        ans.push_back(3);
    for (int i = 0; i < mp[2] - mp[3]; i++)
        ans.push_back(2);
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        solve(s[i] - 48);
    }
    fill();
    sort(ans.begin(), ans.end());
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
    cout << endl;
    return 0;
}
