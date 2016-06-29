#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n,x;
	bool cont=true;
		while(cin>>x)
		{
			cont=true;
		    for(int i=0;i<=100&&cont;i++)
			{
				for(int ii=i;ii<=100;ii++)
				{
					if((ii*ii+i*i)==x)
					  {
  						cout<<"YES"<<endl;
  						cont=false;
  						break;
  					  }
  					  else if(x<(ii*ii+i*i))
                      {
    					  if(i==100)
  						 	 cout<<"NO"<<endl;
				 	      break;
                      }
				}
			}
		}
	return 0;
}
