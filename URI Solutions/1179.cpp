#include <iostream>

using namespace std;

int main()
{
    int a,p=0,im=0;
	int par[5],impar[5];
		for(int i=0;i<15;i++)
		{
		    cin>>a;
	     	if(a%2==0)
	    	{
	    	   par[p]=a;
			   p++;
			   if(p==5)
			   {
			   	  for(int ii=0;ii<5;ii++)
			   		cout<<"par["<<ii<<"] = "<<par[ii]<<endl;
			      p=0;
                }

	    	}
	        else
	    	{
	    	   impar[im]=a;
			   im++;
			   if(im==5)
			   {
			   	for(int ii=0;ii<5;ii++)
			    cout<<"impar["<<ii<<"] = "<<impar[ii]<<endl;
			    im=0;
	           }
	        }
		}
		for(int c=0;c<im;c++)
		cout<<"impar["<<c<<"] = "<<impar[c]<<endl;
		for(int c=0;c<p;c++)
		cout<<"par["<<c<<"] = "<<par[c]<<endl;
return 0;
}
