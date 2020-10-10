// Lab_02.cpp
// < Качалуп Денис >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	double a;
	double z1;
	double z2;

	cout << "a= "; cin >> a;

	z1 = (1 - (2 * (sin(a) * sin(a)))) / (1 + (2 * sin(a) * cos(a)));
	z2 = (1 - tan(a)) / (1 + tan(a));

	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
