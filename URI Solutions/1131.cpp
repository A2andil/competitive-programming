#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int inter,gren,win=0,beat=0,ta=0,exit=0,c=0;
	while (cin >> inter>>gren)
	{
		c++;
		if(inter>gren)
		   win++;
        else if(inter<gren)
		   beat++;
		else if(inter==gren)
		   ta++;
		cout<<"Novo grenal (1-sim 2-nao)\n";
		cin>>exit;
		if(exit==1)
		   continue;
		else if(exit==2)
		  break;
	}
	cout<<c<<" grenais\n";
	cout<<"Inter:"<<win<<endl;
	cout<<"Gremio:"<<beat<<endl;
	cout<<"Empates:"<<ta<<endl;
	if(win>beat)
	    cout<<"Inter venceu mais"<<endl;
	else if(win<beat)
	    cout<<"Gremio venceu mais"<<endl;
	else if(win==beat)
	    cout<<"Nao houve vencedor"<<endl;
return 0;
}
