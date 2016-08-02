#include <iostream>

using namespace std;

int arr[11] = {1,1,2,6,4,2,2,4,2,8,8};
long long D(int n){
    if(n<=10) return arr[n];
    return ((n/10)%2==1?4:6)*D(n/5)*D(n%10);
}

int main()
{
    int n,count=1;
    while(cin>>n){
        cout<<"Instancia "<<count++<<endl<<D(n)%10<<"\n\n";
    }
    return 0;
}
