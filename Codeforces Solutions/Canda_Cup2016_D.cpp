//in the name of God

#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <limits>
#include <string>
#include <iostream>

#define all(v)              v.begin(), v.end()
#define pi                  3.14159265358979323846
#define sz(x)               x.size()
#define ll                  long long
#define mp                  make_pair
#define oo                  1e9 + 7
#define ln                  "\n"

using namespace std;

class MinHeap {
private:
        ll *list, capacity, size;
public:
        MinHeap(ll capacity);
        void MinHeapify(int);
        ll ExtractMin();
        ll GetMin() {
                if (!size) return -1;
                return list[0];
        }
        void InsertKey(ll k);
};

MinHeap::MinHeap(ll sz) {
        size = 0;
        capacity = sz;
        list = new ll[sz];
}

void MinHeap::InsertKey(ll k) {
        size = size + 1;
        ll i = size - 1;
        list[i] = k;
        while (i != 0 && list[(i - 1) / 2] > list[i]) {
                swap(list[i], list[(i - 1) / 2]);
                i = (i - 1) / 2;
        }
}

ll MinHeap::ExtractMin() {
        if (size <= 0)
                return -1;
        if (size == 1) {
                size = size - 1;
                return list[0];
        }
        ll root = list[0];
        list[0] = list[size - 1];
        size = size - 1;
        MinHeapify(0);
        return root;
}

void MinHeap::MinHeapify(int i) {
        int l = 2 * i + 1, r = 2 * i + 2;
        int smallest = i;
        if (l < size && list[l] < list[i])
                smallest = l;
        if (r < size && list[r] < list[smallest])
                smallest = r;
        if (smallest != i) {
                swap(list[i], list[smallest]);
                MinHeapify(smallest);
        }
}

struct Node{
        ll x, y, diff = 0;
};

class PriorityQueue{
private:
        MinHeap *hp;
public:
        PriorityQueue() {
                ll sz = 3 * 1e5 + 5;
                hp = new MinHeap(sz);
        }
        void add(ll v){
                hp->InsertKey(v);
        }
        void remove(){
                hp->ExtractMin();
        }
        ll top(){
                return hp->GetMin();
        }
};

vector<Node> Score;
bool cmp(const Node &a, const Node &b){
        if (a.x > b.x) return true;
        return false;
}

int main(){
        ios::sync_with_stdio(false);
        ll n, idx = 0, val, rs; cin >> n;
        Node nd; cin >> nd.x >> nd.y;
        val = nd.x, nd.diff = nd.y - nd.x + 1, Score.push_back(nd);
        for (int i = 1; i < n; i++){
                cin >> nd.x >> nd.y;
                nd.diff = nd.y - nd.x + 1;
                if (nd.x > val) idx++;
                Score.push_back(nd);
        }
        rs = idx;
        sort(all(Score), cmp);
        PriorityQueue pq;
        int lstidx = idx + 1;
        for (int i = 0; i < idx; i++){
                pq.add(Score[i].diff);
        }
        while (val >= pq.top()){
                if (!rs || pq.top() == -1) break;
                if (pq.top() <= val){
                        val -= pq.top();
                        pq.remove();
                        idx--;
                }
                while (lstidx < n && Score[lstidx].x > val){
                        pq.add(Score[lstidx].diff);
                        lstidx++;
                        idx++;
                }
                rs = min(rs, idx);
        }
        cout << rs + 1 << ln;
        return 0;
}
