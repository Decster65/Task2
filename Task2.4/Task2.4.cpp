#include <iostream>
#include "Test4.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test4 t;
		double a, y;
		cout << "Введите значение переменной a" << endl;
		cin >> a;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "D=" << t.Task2(a, y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}