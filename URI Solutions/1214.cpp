#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int m,n;
    double result=0,count=0;
    cin>>m;
    while(m)
    {
         cin>>n;
         int arr[n];
            for(int i=0;i<n;i++)
            {
            	cin>>arr[i];
            	result+=arr[i];
          	}
        	result=result/n;
        	for(int i=0;i<n;i++)
                if(arr[i]>result)
                   count++;

            result=count*100/n;
            cout<<fixed<<setprecision(3)<<result<<"%"<<endl;
            result=0;
			count=0;
			m--;
    }
	return 0;
}
