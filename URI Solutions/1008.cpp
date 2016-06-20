#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num,hour;
	float per_hour,salary;

	while(cin>>num>>hour>>per_hour)
        {
	  salary=hour*per_hour;
	  cout<<"NUMBER = "<<num<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
	}
	
        return 0;
}
