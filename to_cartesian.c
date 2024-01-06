#include "to_cartesian.h"

#include <math.h>

void to_cartesian(double *x, double *y, double r, double phi)
{
	*x = r * cos(phi * M_PI / 180);
	*y = r * sin(phi * M_PI / 180);
}
