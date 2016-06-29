#include <iostream>
using namespace std;

int main()
{
	int d1,d2,h1,h2,m1,m2,s1,s2,t1,t2,dt;
	string dn;
	int ht,mt,st;
	char s;
	while(cin>>dn>>d1)
	{
		cin>>h1>>s>>m1>>s>>s1;
		cin>>dn>>d2;
		cin>>h2>>s>>m2>>s>>s2;
		t1=h1*60*60+m1*60+s1;
		t2=h2*60*60+m2*60+s2;
		if(t2>=t1)
		dt=t2-t1;
		else
		{
			d2--;
			t2=t2+24*60*60;
			dt=t2-t1;
		}
		ht=dt/3600;
		dt=dt-ht*3600;
		
		mt=dt/60;
		dt=dt-mt*60;
		
		st=dt;
		cout<<d2-d1<<" dia(s)"<<endl;
		cout<<ht<<" hora(s)"<<endl;
		cout<<mt<<" minuto(s)"<<endl;
		cout<<st<<" segundo(s)"<<endl;
		
		
	}
	return 0;
}