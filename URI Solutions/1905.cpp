//In The Name of Allah
#include<iostream>
#include<queue>
#include<string>
#define EV ""
using namespace std;

struct XY{
    int x, y;
};

int main(){
    int n; cin >> n;
    while (n--){
        int matrix[5][5], visted[5][5];
        queue<XY> Q;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                cin >> matrix[i][j];
                visted[i][j] = 0;
            }
        }
        XY start; start.x = 0, start.y = 0;
        visted[0][0] = 1;
        Q.push(start);
        int flag = 0;
        while (!Q.empty()){
            XY cur = Q.front();
            Q.pop();
            if (cur.x == 4 && cur.y == 4){
                cout << "COPS\n";
                flag = 1;
                break;
            }
            else{
                //add left if not visted
                if (cur.y > 0 && !visted[cur.x][cur.y - 1] &&
                    !matrix[cur.x][cur.y - 1]){
                    XY LFT;
                    LFT.x = cur.x, LFT.y = cur.y - 1;
                    visted[LFT.x][LFT.y] = 1;
                    Q.push(LFT);
                }
                //add right if not visited
                if (cur.y < 4 && !visted[cur.x][cur.y + 1]
                    && !matrix[cur.x][cur.y + 1]){
                    XY RT;
                    RT.x = cur.x, RT.y = cur.y + 1;
                    visted[RT.x][RT.y] = 1;
                    Q.push(RT);
                }
                //add top if not visited
                if (cur.x >0 && !visted[cur.x - 1][cur.y] &&
                    !matrix[cur.x - 1][cur.y]){
                    XY TP;
                    TP.x = cur.x - 1, TP.y = cur.y;
                    visted[TP.x][TP.y] = 1;
                    Q.push(TP);
                }
                //add bottom if not visited
                if (cur.x < 4 && !visted[cur.x + 1][cur.y]
                    && !matrix[cur.x + 1][cur.y]){
                    XY BT;
                    BT.x = cur.x + 1, BT.y = cur.y;
                    visted[BT.x][BT.y] = 1;
                    Q.push(BT);
                }
            }
        }
        if(!flag)cout<<"ROBBERS\n";
    }
    return 0;
}
