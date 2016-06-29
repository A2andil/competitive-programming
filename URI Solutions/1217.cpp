#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string x;
    int n,num;
    double mon,sum_m,sum_k;
    cin>>n;
    getline(cin,x);
    sum_m=0;
    sum_k=0;
    for(int i=1;i<=n;i++)
    {
        num=1;
        cin>>mon;
        sum_m+=mon;
        getline(cin,x);
        getline(cin,x);
        for(int ii=0;ii<x.length();ii++)
        {
            if(x[ii]==' ')
                num++;
        }
        sum_k+=num;
        cout<<"day "<<i<<": "<<num<<" kg"<<endl;
    }
    cout<<fixed<<setprecision(2)<<sum_k/n<<" kg by day"<<endl;
    cout<<"R$ "<<fixed<<setprecision(2)<<sum_m/n<<" by day"<<endl;
    return 0;
}
