// Task2.30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test30.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test30 t;
		double r, y;
		cout << "Введите значение переменной r" << endl;
		cin >> r;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "W=" << t.Task2(r, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
