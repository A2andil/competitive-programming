#include <iostream>

using namespace std;

int main()
{
    int n,arr[26],max;
    char l;
    string x;

    cin>>n;
    getline(cin,x);

    for(int i=0;i<n;i++)
    {
        max=0;
        getline(cin,x);

        for(int ii=0;ii<26;ii++)
            arr[ii]=0;

        for(int ii=0;ii<x.length();ii++)
        {
            if((x[ii]>='a'&&x[ii]<='z')||(x[ii]>='A'&&x[ii]<='Z'))//97==>122
            {

                if(x[ii]<97)
                    x[ii]+=32;

                arr[x[ii]-97]++;

                if(arr[x[ii]-97]>max)
                    max=arr[x[ii]-97];
            }
        }

        for(int ii=0;ii<26;ii++)
        {
            if(arr[ii]==max)
            {
                l=ii+97;
                cout<<l;
            }
        }
        cout<<endl;

    }
    return 0;
}
