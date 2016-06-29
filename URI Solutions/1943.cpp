#include <iostream>

using namespace std;

int main()
{
    int arr[]={1, 3, 5, 10, 25, 50,100};
    int x;
    cin>>x;
    for(int i=0;i<=6;i++)
    {
        if(x<=arr[i])
        {
            cout<<"Top "<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}
