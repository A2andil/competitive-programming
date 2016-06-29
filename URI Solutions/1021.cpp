#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int q;
    double res, arr[12] = {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
    string v;

    cin>>res;
        res *=100;
        cout<<"NOTAS:\n";
        for(int i=0;i<12;i++)
        {
            arr[i]*=100;
            if(i==0)
                v = " nota(s)";
            else if(i==6)
            {
                v = " moeda(s)";
                cout<<"MOEDAS:\n";
            }
            q = res/arr[i];
            res -=q*arr[i];
            cout<<q<<v<<" de R$ "<<fixed<<setprecision(2)<<arr[i]/100<<endl;
        }
    return 0;
}
