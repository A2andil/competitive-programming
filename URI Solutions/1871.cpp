#include <iostream>
#include<sstream>
using namespace std;

int main(int argc, char** argv) 
{
	int x,y;
	string result,resultf="";
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
		    break;
		    
		ostringstream convert;
		convert<<(x+y);
		result=convert.str();
		
		for(int i=0;i<result.size();i++)
			if(result[i]!='0')
			    resultf+=result[i];
			  
	    cout<<resultf<<endl;
		resultf="";
	}
	return 0;
}