#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
    	if((a<b+c&&b<a+c&&c<a+b)||(b<c+d&&c<b+d&&d<c+b)||(a<c+d&&c<a+d&&d<a+c)||(a<b+d&&b<a+d&&d<a+b))
    	    cout<<"S"<<endl;
    	else
    	    cout<<"N"<<endl;
	}
	return 0;
}
