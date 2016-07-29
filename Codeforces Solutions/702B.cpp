//In The Name of Allah
#include <iostream>

using namespace std;

bool IsPower2(long long l){
    while(l%2==0){
        l /= 2;
    }
    return (l==1)?true:false;
}
long long arr[100005];
int main(){
    long long n,count=0,sum;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            sum = arr[i]+arr[j];
            if(sum%2==0&&IsPower2(sum))
                count++;
        }
    cout<<count<<endl;
    return 0;
}
