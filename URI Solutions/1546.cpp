#include <iostream>

using namespace std;

int main()
{
    int k,n,y;
    string arr[]={"Rolien","Naej","Elehcim","Odranoel"};
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>n;
        for(int ii=0;ii<n;ii++)
        {
           cin>>y;
           cout<<arr[y-1]<<endl;
        }
    }
    return 0;
}
