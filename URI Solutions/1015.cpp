#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float x1,x2,y1,y2,dist;
	cin>>x1>>y1>>x2>>y2;
	dist=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	dist=sqrt(dist);
	cout<<fixed<<setprecision(4)<<dist<<endl;
	return 0;
}
