#include <iostream>

using namespace std;
struct cas
{
    unsigned t;
    char name;
};
int main()
{
    string p;
    int n,i,j,sum;
    cas x;
    while(cin>>n)
    {
        if(n==0)
            break;
        i=0;
        j=0;
        sum=0;
        cas cor[n];
        cas incor[n];

        for(int ii=0;ii<n;ii++)
        {
            cin>>x.name>>x.t>>p;
            if(p=="correct")
            {
                cor[i]=x;
                i++;
            }
            else
            {
                incor[j]=x;
                j++;
            }
        }

        for(int ii=0;ii<i;ii++)
        {
            sum+=cor[ii].t;

            for(int jj=0;jj<j;jj++)
                if(cor[ii].name==incor[jj].name)
                    sum+=20;
        }
        cout<<i<<" "<<sum<<endl;
    }
    return 0;
}
