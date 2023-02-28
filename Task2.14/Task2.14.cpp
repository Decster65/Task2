#include <iostream>
#include "Test14.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test14 t;
		double x, y;
		cout << "Введите значение переменной x" << endl;
		cin >> x;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "R=" << t.Task2(y,x) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}