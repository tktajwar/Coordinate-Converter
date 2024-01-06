#include "coordinate_converter.h"

#include <stdio.h>

#include "to_cartesian.h"
#include "to_cylindrical.h"

int main()
{
	double r, phi, x, y;
	char ui;

	do {
		printf("-- Select conversion --\n");
		printf("[1] Cylindrical to cartesian\n");
		printf("[2] Cartesian   to cylindrical\n");
		printf("Select: ");
		scanf(" %c", &ui);

		if (ui != '1' && ui != '2')
			printf("\nInvalid input!\n\n\n");
	} while (ui != '1' && ui != '2');

	switch (ui) {
	case '1':
		printf("r: ");
		scanf("%lf", &r);
		printf("phi: ");
		scanf("%lf", &phi);
		to_cartesian(&x, &y, r, phi);
		printf("\nx = %lf\ny = %lf\n", x, y);
		break;
	case '2':
		printf("x: ");
		scanf("%lf", &x);
		printf("y: ");
		scanf("%lf", &y);
		to_cylindrical(&r, &phi, x, y);
		printf("\nr   = %lf\nphi = %lf\n", r, phi);
		break;
	}

	return 0;
}
