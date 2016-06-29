#include <iostream>
#include<bitset>
#include<cmath>
using namespace std;

int main()
{
    unsigned long long x,num;
    string result,final_result,number;
    bool valid;
    while(cin>>x)
    {
       if(x==0)
       {
           cout<<'0'<<endl;
           break;
       }
       final_result="";
       valid=false;
       result="";
       string binary = bitset<64>(x).to_string();
          for(int i=0;i<64;i++)
          {
              if(valid||binary[i]!='0')
              {
                  valid=true;
                  result+=binary[i];
              }
          }

        int ii=result.length()%5;
        if(ii!=0)
        {
           for(int i=0;i<5-ii;i++)
                result='0'+result;
        }

        for(int i=0;i<=result.length()-5;i+=5)
        {
            number=result.substr(i,5);
            num=0;
            for(int s=0;s<5;s++)
                num+=(number[s]-'0')*pow(2,4-s);


            if(num<10)
                final_result+=num+'0';
            else if(num>=10)
                final_result+=(num+55);
        }
        cout<<final_result<<endl;

    }
    return 0;
}
