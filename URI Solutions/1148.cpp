//in the name of God

#include <iostream>
#include <limits.h>

#define oo INT_MAX
using namespace std;

int matrix[500][500];

int MinDistance(int dist[], bool picked[], int sz) {
    int min = oo, minIdx;
    for (int i = 0; i < sz; i++) {
        if (picked[i] == false && dist[i] <= min)
            min = dist[i], minIdx = i;
    }
    return minIdx;
}

void printDist(int dist[], int to) {
    if (dist[to] != oo) cout << dist[to] << endl;
    else cout << "Nao e possivel entregar a carta" << endl;
}

void Dijkstra(int sz,int src, int to) {
    int dist[sz];
    bool picked[sz];
    for (int i = 0; i < sz; i++)
        dist[i] = oo, picked[i] = false;

    dist[src] = 0;

    for (int count = 0; count < sz - 1; count++) {
        int u = MinDistance(dist, picked, sz);
        picked[u] = true;
        for (int v = 0; v < sz; v++) {
            if (!picked[v] && matrix[u][v] != oo && dist[u] != oo
                && dist[u] + matrix[u][v] < dist[v])
                dist[v] = dist[u] + matrix[u][v];
        }
    }
    printDist(dist, to);
}

int main() {
    int c, e;
    while (cin >> c >> e && (c + e)) {
        for (int i = 0; i < c; i++)
            for (int j = 0; j < c; j++)
                matrix[i][j] = oo;
        while (e--) {
            int src, to, t; cin >> src >> to >> t;
            if(matrix[to - 1][src - 1] == oo)
                matrix[src - 1][to - 1] = t;
            else {
                matrix[src - 1][to - 1] = 0;
                matrix[to - 1][src - 1] = 0;
            }
        }
        int q; cin >> q;
        while (q--) {
            int src, to; cin >> src >> to;
            Dijkstra(c, src - 1, to - 1);
        }
        cout << endl;
    }
    return 0;
}
