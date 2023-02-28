// Task2.19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test19.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test19 t;
		double n, y,g;
		cout << "Введите значение переменной p" << endl;
		cin >> n;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "Введите значение g" << endl;
		cin >> g;
		cout << "K=" << t.Task2(n, y,g) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
