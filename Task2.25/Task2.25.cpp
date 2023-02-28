// Task2.25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test25.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test25 t;
		double f, y;
		cout << "Введите значение переменной f" << endl;
		cin >> f;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "G=" << t.Task2(f, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
