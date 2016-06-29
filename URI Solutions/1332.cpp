#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	string arr[]={"one","two","three"};
	
	string num,v;
	
    int n,counter=0,number;
    
    while(cin>>n)
    {
    	for(int i=0;i<n;i++)
    	{
    		cin>>num;
    		for(int ii=0;ii<3;ii++)
    		{
    			v=arr[ii];
    			if(num.size()==v.size())
    			{
    				for(int x=0;x<num.size();x++)
    					if(num[x]==v[x])
						   counter++;
    		    }
    		    if(counter>=num.size()-1)
    		    {
    		       number=ii+1;
				   break;	
				}
			}
			cout<<number<<endl;
    			counter=0;
		}
	}
	return 0;
}