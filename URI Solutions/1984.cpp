#include <iostream>
using namespace std;

int main()
{
    string line;
    cin>>line;
     char * data = new char[line.size() + 1];
     copy(line.begin(), line.end(), data);
      data[line.size()] = '\0';
	  for(int i=0;i<line.size();i++)
	  	cout<<data[line.size()-i-1];

	 cout<<endl;
	return 0;
}
