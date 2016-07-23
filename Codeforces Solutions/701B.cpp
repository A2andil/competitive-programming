#include <iostream>

using namespace std;

int main()
{
    long long n,m,a,b,r=0,c=0,res,root;
    string v="";
    cin>>n>>m;
    root = n*n;
    int row[n] = {0},col[n] = {0};
    while(m--)
    {
        cin>>a>>b;
        row[a-1]++;
        col[b-1]++;

        if(row[a-1]==1)
            r++;
        if(col[b-1]==1)
            c++;

        res = root - r*n-c*(n-r);
        v += to_string(res)+" ";
    }
    cout<<v.substr(0,v.length()-1)<<endl;
    return 0;
}
