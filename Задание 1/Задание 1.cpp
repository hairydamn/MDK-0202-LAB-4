// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int g;
	cout << "Введите ваше число: ";
	cin >> g;
	cout << "Числа, на которые делится ваше число: " << endl;
	for (int i = 1; i <= 1000; i++)
	{
		if (g % i == 0)
		{
			cout << i << endl;
		}
	}
	system("pause");
}
