// program.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	double V, t, k, Hg, Hs, D, L, d, Q, N, H;
	cout << "Введите данные: ";
	cin >> V >> t >> k >> Hg >> Hs >> D >> L >> d;
	if ((t<=24) && (V>0) && (k<=100) && (Hg>0) && (Hs > 0) && (D>0) && (L>0) && (d>0))
	{
		Q = V / (3600 * t);
	    N = (9, 81 * Q * H) / k;
	}
	cout << "Данные введены неверно";
}

