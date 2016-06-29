#include <iostream>

using namespace std;

int main()
{
    int hs, ms, he, me,ts,te,tt,h,m;
	while (cin >> hs >> ms >> he >> me)
	{
		ts = hs * 60 + ms;
		te = he * 60 + me;
		if (ts > te || ts == te)
			tt = (24 * 60 - ts) + te;

		else
			tt = te - ts;

		h = tt / 60;
		m =tt-h * 60;
		cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
	}
return 0;
}
