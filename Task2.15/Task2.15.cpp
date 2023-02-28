// Task2.15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test15.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test15 t;
		double  y;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "H=" << t.Task2(y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
