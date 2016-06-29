#include <iostream>

using namespace std;

int main()
{
    int n, f;
    long long fib[61];
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int j = 2; j <= 60; j++)
            fib[j] = fib[j-2] + fib[j-1];

    for(int i = 0; i < n; i++)
    {
        cin >> f;
        cout << "Fib(" << f << ") = " << fib[f] << "\n";
    }
return 0;
}
