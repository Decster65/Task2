#include <iostream>
#include "Test5.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test5 t;
		double x;
		cout << "Введите значение переменной x" << endl;
		cin >> x;
		cout << "L=" << t.Task2(x) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
