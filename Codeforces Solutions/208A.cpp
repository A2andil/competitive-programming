#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string v,res="";
    cin>>v;
    for(int i=0;i<v.length();i++)
    {
        if(i+2<v.length()&&v[i]=='W'&&v[i+1]=='U'&&v[i+2]=='B')
        {
            if(res!=""&&res[res.length()-1]!=' ')
               res+=' ';

            i+=2;
        }
        else
            res += v[i];
    }
    cout<<res<<endl;
    return 0;
}
