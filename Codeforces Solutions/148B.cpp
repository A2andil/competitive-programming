#include<iostream>
int main()
{
	float p,d,t,f,c;
	std::cin>>p>>d>>t>>f>>c;
	float k=d-p,x=p*t,r=0;
	if(k>0)
		while((x+=x/k*p)<c)
			++r,x+=p*(x/d+f);
	std::cout<<r;
}
