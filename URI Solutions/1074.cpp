#include<stdio.h>
int main()
{
	int n,i,j,a,b,sum=0;
	while(scanf("%d",&n)==1)
    {
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&a);
	        if(a==0)
	           printf("NULL\n");

	        else if(a%2==0 && a<0)
	           printf("EVEN NEGATIVE\n");

	        else if(a%2==0 && a>0)
	           printf("EVEN POSITIVE\n");

	        else if(a%2!=0 && a>0)
	           printf("ODD POSITIVE\n");

	        else
	           printf("ODD NEGATIVE\n");
	    }
}

	return 0;
}
