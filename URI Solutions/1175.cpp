#include <iostream>

using namespace std;

int main()
{
    int s;
    int n[20];
    for(int i=0;i<20;i++)
        cin>>n[i];
    for(int i=0,l=19;i<l;i++,l--)
    {
        s=n[i];
        n[i]=n[l];
        n[l]=s;
    }
    for(int i=0;i<20;i++)
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    return 0;
}
