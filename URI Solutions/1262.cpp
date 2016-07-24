#include <iostream>

using namespace std;

int main()
{
    string stream;
    unsigned int proc,clock,i,j;
    while(cin>>stream>>proc){
        clock = 0;
        for(i=0;i<stream.length();i++){
            if(stream[i]=='W')
                clock++;
            else if(stream[i]=='R'){
                clock++;
                j = 1;
                while(j+i<stream.length()&&stream[i+j]=='R'&&j<proc){
                    j++;
                }
                i = i+j-1;
            }
        }

       cout<<clock<<endl;
    }
    return 0;
}
