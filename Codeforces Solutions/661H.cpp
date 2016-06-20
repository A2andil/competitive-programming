#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int Covert_Decimal(string num)
{
    int res = 0;
    for(int i=0;i<num.length();i++)
        res += (num[num.length()-i-1]-'0')*pow(10,i);

    return res;
}
int main()
{
    int n=1,Size_F;
    string F_line,Res;
    getline(cin,F_line);

    Size_F = F_line.length();
    for(int i=0;i<Size_F;i++)
        if(F_line[i]==' ')
            n++;

    int matrix[n][n],Res_matrix[n][n];

    int start=0,End=0,j=0;
    for(int i=0;i<Size_F;i++)
        if(F_line[i]==' '||i==Size_F-1)
        {
            End = (i==Size_F-1)?i+1:i;
            Res = F_line.substr(start,End-start);
            matrix[0][j] = Covert_Decimal(Res);
            j++;
            start = End+1;
        }

   for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
             cin>>matrix[i][j];


   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           Res_matrix[j][n-i-1]=matrix[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          cout<<Res_matrix[i][j]<<((j!=n-1)?" ":"\n");

    return 0;
}
