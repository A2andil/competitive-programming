//In The Name of Allah
#include<iostream>

using namespace std;

int arr[100005];

int main(){
    int n,m,key; cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]+=i==0?0:arr[i-1];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>key;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(key==arr[mid]){
                cout<<mid+1<<endl;
                break;
            }
            else if(key>arr[mid]) low=mid+1;
            else{
                if(mid==0){
                    cout<<1<<endl;
                    break;
                }
                if(key>arr[mid-1]){
                    cout<<mid+1<<endl;
                    break;
                }
                high = mid-1;

            }

        }
    }
    return 0;
}
