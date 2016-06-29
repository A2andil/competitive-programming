#include <iostream>

using namespace std;

int main()
{
    int swap;
    int num[3];
    int numo[3];

    for(int j=0;j<3;j++)
    {
        cin>>num[j];
        numo[j]=num[j];
    }

    for(int i=1;i<3;i++)
    {
       swap=num[i];
       while(swap<num[i-1]&&(i-1)>=0)
       {
          num[i]=num[i-1];
           i--;
       }
       num[i]=swap;
    }

    for(int j=0;j<3;j++)
       cout<<num[j]<<endl;

    cout<<endl;

    for(int j=0;j<3;j++)
      cout<<numo[j]<<endl;
return 0;
}
