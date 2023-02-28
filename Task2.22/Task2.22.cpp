// Task2.22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test22.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test22 t;
		double u, y,x;
		cout << "Введите значение переменной p" << endl;
		cin >> u;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "Введите значение x" << endl;
		cin >> x;
		cout << "K=" << t.Task2(u, y,x) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
