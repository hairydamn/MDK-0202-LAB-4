// Задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0, "");
	double g1 = 1;
	double r2 = 1;
	double p3 = 1;
	double h4 = 1;
	double x;
	int s = 3;
	int d = 5;
	int g = 7;
	cout << "Введите значение x: " << endl;
	cin >> x;
	double n;
	cout << "Введите значение n: " << endl;
	cin >> n;
	double e = 2 * n + 1;
	for (s; s > 0; s--)
	{
		g1 *= s;

	}
	for (d; d > 0; d--)
	{
		r2 *= d;

	}
	for (g; g > 0; g--)
	{
		p3 *= g;

	}
	for (e; e > 0; e--)
	{
		h4 *= e;

	}
	for (int i = 0; i < n; i++)
	{
		x = ((pow(x, 3)) / g1) + ((pow(x, 5)) / r2) - ((pow(x, 7)) / p3) + (pow(-1, n) * pow(x, 2 * n + 1)) / h4 - sin(x);
	}
	cout << "Значение синуса: " << x << endl;

	system("pause");
}