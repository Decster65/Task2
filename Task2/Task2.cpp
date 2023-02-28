// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <math.h>
#include "Test.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test t;
		int a, l;
		cout << "Введите значение переменной t" << endl;
		cin >> a;
		cout << "Введите значение l" << endl;
		cin >>l;
		cout << "R=" << t.Task2(a, l) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
