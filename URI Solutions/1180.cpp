#include <iostream>

using namespace std;

int main()
{
    int min=0,index=0,a;
	cin>>a;
		int arr[a];
		for(int i=0;i<a;i++)
		{
			cin>>arr[i];
			if(min>arr[i])
			{
					min=arr[i];
					index=i;
			}
		}
		cout<<"Menor valor: "<<min<<endl;
		cout<<"Posicao: "<<index<<endl;
return 0;
}
