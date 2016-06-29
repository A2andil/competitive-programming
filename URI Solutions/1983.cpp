#include <iostream>
using namespace std;

int main() 
{
    long long id,n,idmax=0;
    double score,max=0;
    while(cin>>n)
    {
    	for(int i=0;i<n;i++)
    	{
    		cin>>id>>score;
    		if(score>max)
    		{
    			max=score;
    			idmax=id;
			}
		}
		if(max>=8)
		cout<<idmax<<endl;
		else
		cout<<"Minimum note not reached"<<endl;
		max=0;
		idmax=0;
	}
	return 0;
}