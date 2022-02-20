#include <stdio.h>

#define PI 3.141592654

int main(void)
{

	double r = 0.0, d = 0.0, wynik = 0.0;

	scanf_s("%lf %lf", &r, &d);

	wynik = PI * ((r * r) - (0.25 * d * d));
	printf("%.2lf", wynik);
	return 0;
}