// Task2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test12.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test12 t;
		double x, y;
		cout << "Введите значение переменной x" << endl;
		cin >> x;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "K=" << t.Task2(x, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}


