//In The Name of Allah

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int val;
    string name;
};

bool cmp(node x, node y)  {
    return x.val < y.val;
}

int main() {
    int n;
    while (cin >> n) {
        vector<node> lst;
        for (int i = 0; i < n; i++) {
            node x; cin >> x.name >> x.val;
            lst.push_back(x);
        }
        sort(lst.begin(), lst.end(), cmp);
        for (int i = 0; i < lst.size(); i++) {
            cout << lst[i].name;
            if (i == lst.size() - 1) cout << endl;
            else cout << ' ';
        }
    }

    return 0;
}
