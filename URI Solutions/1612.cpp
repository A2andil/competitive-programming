#include <iostream>

using namespace std;

int main()
{
    long long n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        y=x/2;
        if(x%2==1)
            y++;
        cout<<y<<endl;
    }
    return 0;
}
