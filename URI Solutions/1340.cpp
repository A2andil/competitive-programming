//IN THE NAME OF ALLAH
#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
#include<cstdio>
#include<bitset>
#include<string>
#include<vector>
#include<queue>
#include<cmath>
#include<stack>
#include<map>
#include<set>
#define Freopen          freopen("input.txt", "r", stdin)
#define dist(Xn,Yn,X,Y)  sqrt(pow(X-Xn,2)+pow(Y-Yn,2))
#define all(c)           (c).begin(),(c).end()
#define Min(a,b,c)       min(a,min(b,c))
#define Max(a,b,c)       max(a,max(b,c))
#define pi               3.14159265358979323846
#define vii              vector<vector<int>>
#define pri              pair<int,int>
#define sz(x)            (x).size()
#define vi               vector<int>
#define vll              vector<ll>
#define pb               push_back
#define ll               long long
#define oo               1e9+7
#define ln               '\n'
using namespace std;

struct Node{
	Node* Next;
	int value;
};
class PrQue{
private:
	Node* head = NULL;
public:
	void add(int v){
		Node* nd = new Node();
		nd->value = v, nd->Next = NULL;
		if (head == NULL) head = nd;
		else {
			if (nd->value >= head->value){
				nd->Next = head;
				head = nd;
				return;
			}
			Node *thead = head, *cur = head;
			while (thead != NULL&& nd->value < thead->value){
				cur = thead;
				thead = thead->Next;
			}
			nd->Next = thead;
			cur->Next = nd;
		}
	}
	void remove(){
		head = head->Next;
	}
	int top(){
		return head->value;
	}
};

int main(){
	ios::sync_with_stdio(false);
	int tc, n;
	while (cin >> tc){
		stack<int> st;
		queue<int> Q;
		PrQue PQ;
		int s = 0, q = 0, pq = 0, tw = 0;
		for (int i = 0; i < tc; i++){
			int a, b; cin >> a >> b;
			if (a == 1){
				st.push(b);
				Q.push(b);
				PQ.add(b);
			}
			else{
				if (st.top() == b) s++;
				if (Q.front() == b) q++;
				if (PQ.top() == b) pq++;
				PQ.remove();
				st.pop();
				Q.pop();
				tw++;
			}
		}
		if ((s == tw&&q == tw) || (s == tw&&pq == tw) || (q == tw&&pq == tw)) cout << "not sure" << ln;
		else if (s == tw) cout << "stack" << ln;
		else if (q == tw) cout << "queue" << ln;
		else if (pq == tw)cout << "priority queue" << ln;
		else cout << "impossible" << ln;
	}
	return 0;
}
