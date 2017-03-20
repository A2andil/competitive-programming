//in the name of God

#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

class SegmentTree {
private:
        int *ST, size;
        int Pow(int b, int n) {
                if (!n) return 1;
                int rs = Pow(b, n / 2);
                return n % 2 ? rs * rs * b : rs * rs;
        }
        int buildSTUtil(int *list, int s, int e, int i) {
                if (s == e) {
                        ST[i] = list[s];
                        return list[s];
                }
                int lvl = level(i), md = s + (e - s) / 2;
                if (size % 2 == 0) {
                        if (lvl % 2) ST[i] = buildSTUtil(list, s, md, i * 2 + 1) |
                                buildSTUtil(list, md + 1, e, i * 2 + 2);
                        else ST[i] = buildSTUtil(list, s, md, i * 2 + 1) ^
                                buildSTUtil(list, md + 1, e, i * 2 + 2);
                }
                else {
                        if (lvl % 2) ST[i] = buildSTUtil(list, s, md, i * 2 + 1) ^
                                buildSTUtil(list, md + 1, e, i * 2 + 2);
                        else ST[i] = buildSTUtil(list, s, md, i * 2 + 1) ^
                                buildSTUtil(list, md + 1, e, i * 2 + 2);
                }
                return ST[i];
        }
        int updateValueUtil(int *list, int ss, int se, int i, int si) {
                if (ss == se)
                        return ST[si] = list[i];
                int md = ss + (se - ss) / 2, lvl = level(si);

                if (i >= ss && i <= md)
                        ST[si * 2 + 1] = updateValueUtil(list, ss, md, i, si * 2 + 1);
                else
                        ST[si * 2 + 2] = updateValueUtil(list, md + 1, se, i, si * 2 + 2);


                if (size % 2 == 0) {
                        if (lvl % 2) ST[si] = ST[si * 2 + 1] | ST[si * 2 + 2];
                        else ST[si] = ST[si * 2 + 1] ^ ST[si * 2 + 2];
                }
                else {
                        if (lvl % 2) ST[si] = ST[si * 2 + 1] ^ ST[si * 2 + 2];
                        else ST[si] = ST[si * 2 + 1] | ST[si * 2 + 2];
                }
                return ST[si];
        }
        int level(int i) {
                int rs = 0;
                while (i) {
                        i = (i - 1) / 2;
                        rs++;
                }
                return rs;
        }
public:
        SegmentTree(int *list, int n) {
                int sz = 2 * Pow(2, ceil(log2(n))) - 1;
                size = log2(sz);
                ST = new int[sz];
                buildSTUtil(list, 0, n - 1, 0);
        }
        void updateValue(int *list, int n, int i, int value) {
                list[i] = value;
                updateValueUtil(list, 0, n - 1, i, 0);
        }
        void solve() {
                cout << ST[0] << endl;
        }
};


int main(){
        ios::sync_with_stdio(0), cin.tie();
        int n, m; cin >> n >> m;
        int *list = new int[1 << n];
        for (int i = 0; i < 1 << n; i++) {
                cin >> list[i];
        }
        SegmentTree *Tr = new SegmentTree(list, 1 << n);
        while (m--) {
                int idx, val; cin >> idx >> val;
                Tr->updateValue(list, 1 << n, idx - 1, val);
                Tr->solve();
        }
        return 0;
}
