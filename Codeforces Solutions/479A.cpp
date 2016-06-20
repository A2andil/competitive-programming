#include <iostream>

using namespace std;


int main()
{
    int a,b,c,max,arr[5];
    while(cin>>a>>b>>c)
    {
        arr[0]=a+b+c;
        arr[1]=a*b*c;
        arr[2]=(a+b)*c;
        arr[3]=a*b+c;
        arr[4]=a*(b+c);

        max = arr[0];
        for(int i=0;i<5;i++)
            if(arr[i]>max)
               max=arr[i];

        cout<<max<<endl;
    }
    return 0;
}
