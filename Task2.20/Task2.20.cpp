// Task2.20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test20.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test20 t;
		double x, y,k;
		cout << "Введите значение переменной x" << endl;
		cin >> x;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "Введите значение k" << endl;
		cin >> k;
		cout << "U=" << t.Task2(x, y,k) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
