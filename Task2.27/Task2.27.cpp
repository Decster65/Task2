// Task2.27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test27.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test27 t;
		double v, y,x;
		cout << "Введите значение переменной v" << endl;
		cin >> v;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "Введите значение x" << endl;
		cin >> x;
		cout << "W=" << t.Task2(v, y,x) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
