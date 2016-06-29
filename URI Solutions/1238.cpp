#include <iostream>

using namespace std;

int main()
{
    string x,y;
    int n,xx,yy,inx,iny;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        xx=x.size();
        yy=y.size();
        inx=0;
        iny=0;
        for(int ii=0;ii<x.size()+y.size();ii++)
        {
            if((ii%2==0&&xx>0)||yy==0)
                {
                    cout<<x[inx];
                    inx++;
                    xx--;
                }
            else
            {
                cout<<y[iny];
                    iny++;
                    yy--;
            }
        }
        cout<<endl;
    }
    return 0;
}
