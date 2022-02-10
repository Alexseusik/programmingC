#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	double r, h, V;
	printf("Введіть через пробіл значення r та h:  ");
	scanf("%lf %lf", &r, &h);
	V = M_PI * pow(r,2) * h;
	printf("V = %g\n", V);
	return 0;
}