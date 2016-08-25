#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int q,res;
    int arr[12] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    double rs;
    string v=" nota(s)";

    cin>>rs; res=(rs*100.0)+0.5;
    cout<<"NOTAS:\n";
    for(int i=0;i<12;i++){
        if(i==6){
                v = " moeda(s)";
                cout<<"MOEDAS:\n";
        }
            q = res/arr[i];
            res %=arr[i];
            cout<<q<<v<<" de R$ "<<fixed<<setprecision(2)<<arr[i]/100.0<<endl;
    }
    return 0;
}

