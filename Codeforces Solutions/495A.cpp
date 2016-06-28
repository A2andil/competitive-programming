#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[10] = {2,7,2,3,3,4,2,5,1,2},res;
    string number;
    while(cin>>number)
    {
        res = 1;
        for(int i=0;i<number.length();++i)
            res *= arr[number[i]-48];
        cout<<res<<endl;
    }
    return 0;
}
