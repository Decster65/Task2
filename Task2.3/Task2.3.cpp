// Task2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test3.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test3 t;
		double n, y;
		cout << "Введите значение переменной n" << endl;
		cin >> n;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "G=" << t.Task2(n, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}