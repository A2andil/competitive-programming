#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	string x,z;
	int result=0,result1=0,p,t;
	while(cin>>x)
	{
		if(x[0]=='-')
		    break;
		else if(x[0]=='0'&&x[1]=='x')
		{
		     z=x.substr(2,x.size()-2);
		     for(int i=0;i<z.size();i++)
			 {
			 	p=z.size()-i-1;
			 	if(z[i]>='a'&&z[i]<='f')
			 	   t=z[i]-'a'+10;
                else if(z[i]>='A'&&z[i]<='F')
                   t=z[i]-'A'+10;
                else
                   t=z[i]-'0';
			 	result +=t*pow (16, p);
			 }

	     	cout<<dec<<result<<endl;
	    }
	    else
	    {
	   	 for(int i=0;i<x.size();i++)
			 {
			 	p=x.size()-i-1;
			 	result+=(x[i]-'0')*pow (10, p);
			 }
			 cout<<"0x"<<uppercase<<hex<<result<<endl;
		}
		result=0;
	}
return 0;
}
