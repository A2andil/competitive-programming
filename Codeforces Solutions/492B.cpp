//In The Name of Allah
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std;
int arr[1005];

int main(){
    double ans;
    int n,l,end,start,Max; cin>>n>>l;
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    start=arr[0]*2,end=(l-arr[n-1])*2;
    Max = max(start,end);

    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>Max)
            Max=arr[i]-arr[i-1];
    }
    ans = Max;
    cout<<fixed<<setprecision(9)<<ans/2<<endl;
    return 0;
}
