#include <iostream>

using namespace std;

int main()
{
    long long n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    sum = sum/(n/2);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((arr[i]+arr[j]==sum)&&i!=j)
            {
                long long first = i,second = j;

                if(arr[i]<arr[j])
                    first = i,second = j;
                else if(arr[i]>arr[j])
                    first = j,second = i;

                cout<<first+1<<' '<<second+1<<endl;
                arr[i] = sum+1,arr[j] = sum+1;
                break;
            }
    return 0;
}
