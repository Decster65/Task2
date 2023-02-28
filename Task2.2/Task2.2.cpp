// Task2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test2.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test2 t;
		double p, y;
		cout << "Введите значение переменной p" << endl;
		cin >> p;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "K=" << t.Task2(p,y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}


