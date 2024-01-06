#include "to_cylindrical.h"

#include <math.h>

void to_cylindrical(double *r, double *phi, double x, double y)
{
	*r = sqrt(pow(x, 2) + pow(y, 2));
	*phi = 1 / tan(y / x);
}
