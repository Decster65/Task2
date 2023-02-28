// Task2.17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test17.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test17 t;
		double y;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "N=" << t.Task2(y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}