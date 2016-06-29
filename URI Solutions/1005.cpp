#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
     float x,y;
     cin>>x>>y;
	   cout<<"MEDIA = "<<fixed<<setprecision(5)<<(x*3.5+y*7.5)/(3.5+7.5)<<endl;
   return 0;
}
