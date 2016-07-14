#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[5][5],x,y,result;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    if(x<2)
        x+=2;
    if(y<2)
        y+=2;

    result=(x-2)+(y-2);
    cout<<result<<endl;
    return 0;
}
