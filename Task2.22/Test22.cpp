#include "Test22.h"
#include <math.h>
int Test22::Task2(double& u, double& y, double& x)
{
	return sin(2*u)*log10(2*pow(y,2)+sqrt(x));
}