#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	double x, f, g;
	printf("Введіть значення х =   ");
	scanf("%lf", &x);
	f = pow(M_E, -(pow(x,2))); // f(x) = e^(-(x^2));
	g = -2*(x*pow(M_E, -(pow(x,2)))); // g(x) = -2xe^(-(x^2));
	printf("f(x) = %g\n g(x) = %g", f, g);
	return 0;
}