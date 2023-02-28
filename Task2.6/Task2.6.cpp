#include <iostream>
#include "Test6.h"
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Test6 t;
		double y,x;
		cout << "Введите значение переменной y" << endl;
		cin >> y;
		cout << "Введите значение переменной x" << endl;
		cin >> x;
		cout << "M=" << t.Task3(y,x) << endl;

	}
	catch (const std::exception&)
	{
		cout << "Ошибка входных данных" << endl;
	}
	system("pause");
}
