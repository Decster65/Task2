﻿// Task2.21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test21.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test21 t;
		double h, y;
		cout << "Введите значение переменной h" << endl;
		cin >> h;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "P=" << t.Task2(h, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
