#include <iostream>

using namespace std;

int main()
{
    int s, e, d;
	while (cin >> s >> e)
	{
		if (s>e||s==e)
			d = (24 - s) + e;
		else
			d= e - s;
		cout<< "O JOGO DUROU " << d << " HORA(S)" << endl;
	}
    return 0;
}
