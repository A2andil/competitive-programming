//in the name of God

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<char, double> mp;

int main(){
        ios::sync_with_stdio(0), cin.tie();
        string s = "WHQESTX", v;
        double x = 1.0, rs;
        for (int i = 0; i < s.size(); i++) {
                mp[s[i]] = 1.0 / x;
                x *= 2.0;
        }
        while (cin >> v && v != "*") {
                vector<string> list;
                int bg = 1, ans = 0;
                for (int i = 1; i < v.size(); i++) {
                        if (v[i] == '/') {
                                list.push_back(v.substr(bg, i - bg));
                                bg = i + 1;
                        }
                }
                for (int i = 0; i < list.size(); i++) {
                        rs = 0.0;
                        for (int j = 0; j < list[i].size(); j++) {
                                rs += mp[list[i][j]];
                        }
                        if (rs == 1.0) ans++;
                }
                cout << ans << endl;
        }
        return 0;
}
