#include <iostream>
#include "Test16.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test16 t;
		double y;
		cout << "Введите значение y" << endl;
		cin >> y;
		cout << "S=" << t.Task2(y) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}