// Lab_4_3.cpp
// Козубенко Андрій
// Лабораторна робота № 4.3
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 10

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "F" << "       |" << endl;
	cout << "---------------------------" << endl;

	for (double x = xp; x <= xk; x += dx)
	{
		if (x < 3.0 && b != 0)
			F = a * x * x - b * x + c;
		else
			if (x > 3.0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = x / c;

		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << F
			<< "    |" << endl;
	}
	cout << "---------------------------" << endl;

	return 0;
}
