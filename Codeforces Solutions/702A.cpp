//In The Name of Allah
#include <iostream>

using namespace std;

int arr[100005];
int main()
{
    int n,max,i,j,count;
    cin>>n;
    for(i=0;i<n;++i) cin>>arr[i];

    max=1;
    for(i=0;i<n;++i){
        count = 1;
        for(j=i+1;j<n;++j){
            if(arr[j-1]<arr[j]) count++;
            if(arr[j-1]>=arr[j]||j==n-1){
                max = (max<count)?count:max;
                i =j-1;
                break;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
