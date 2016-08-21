//In The Name of Allah
#include<iostream>
#include<string>
#define EV ""
using namespace std;

int main(){
	int cntd, cnts,l;
	string v,rs;
	while (getline(cin, v)){
		cntd = cnts = 0,rs=EV;
		l = v.length();
		for (int i = 0; i < l; i++){
			if (v[i] == '_'){
				cntd++;
				if (cntd % 2) rs += "<i>";
				else rs += "</i>";
			}
			else if (v[i] == '*'){
				cnts++;
				if (cnts % 2) rs += "<b>";
				else rs += "</b>";
			}
			else{
				rs += v[i];
			}
		}
		cout << rs << endl;
	}
	return 0;
}
