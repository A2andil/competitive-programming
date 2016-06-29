#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {6,2,5,5,4,5,6,3,7,6},ans,n;
    string v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        ans = 0;
        for(int j=0;j<v.length();j++)
            ans += arr[v[j]-'0'];

        cout<<ans<<" leds\n";
    }
    return 0;
}
