#include "Test15.h"
#include <math.h>
int Test15::Task2(double& y)
{
	return sin(pow(y,2))-2.8*y+sqrt(abs(y));
}