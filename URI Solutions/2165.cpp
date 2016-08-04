#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
   int count=0;
   char s;
   while(true){
       s = getchar();
       if(s=='\n') break;
       count++;
   }
   cout<<(count>140?"MUTE":"TWEET")<<endl;
   return 0;
}
