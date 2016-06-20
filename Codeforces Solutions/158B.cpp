#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[4]={0},count=0,n,v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        arr[v-1]++;
    }

    arr[0] = arr[0]>=arr[2]?arr[0]-arr[2]:0;
    arr[1] += arr[0]/2;
    count = arr[3]+arr[2]+arr[1]/2+(arr[1]%2||arr[0]%2);

    cout<<count<<endl;
    return 0;
}
