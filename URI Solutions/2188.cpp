//In The Name of Allah
#include <iostream>
using namespace std;
struct X{
    int x1,x2;
};
struct Y{
    int y2,y1;
};

int main(){
    int n,x1,x2,y1,y2,cnt=1;
    while(cin>>n&&n){
        X x; x.x1=-10e4,x.x2=10e4;
        Y y; y.y2=-10e4,y.y1=10e4;
        while(n--){
            cin>>x1>>y1>>x2>>y2;
            if(x1>x.x1) x.x1=x1;
            if(x2<x.x2) x.x2=x2;

            if(y2>y.y2) y.y2=y2;
            if(y1<y.y1) y.y1=y1;
        }
        cout<<"Teste "<<cnt++<<endl;
        if(!(x.x1<x.x2&&y.y2<y.y1)) cout<<"nenhum\n\n";
        else
            cout<<x.x1<<' '<<y.y1<<' '<<x.x2<<' '<<y.y2<<"\n\n";
    }
    return 0;
}
