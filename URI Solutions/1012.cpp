#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

void print(string out,double value)
{
    cout<<out<<fixed<<setprecision(3)<<value<<endl;
}

int main(int argc, char *argv[])
{
    const double pi = 3.14159;
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        print("TRIANGULO: ",0.5*a*c);
        print("CIRCULO: ",pi*c*c);
        print("TRAPEZIO: ",(a+b)/2*c);
        print("QUADRADO: ",b*b);
        print("RETANGULO: ",a*b);
    }
    return 0;
}
