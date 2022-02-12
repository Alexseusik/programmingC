#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


double f_x(double x) {
	double f_X = pow(M_E, -(pow(x,2)));
	return f_X;
}

double g_x(double x) {
	double g_X = -2*(x*pow(M_E, -(pow(x,2))));
	return g_X;
}

int main()
{
	double x, f, g;
	printf("Введіть значення х =   ");
	scanf("%lf", &x);
	f = f_x(x); // f(x) = e^(-(x^2));
	g = g_x(x); // g(x) = -2xe^(-(x^2));
	printf("f(x) = %g\n g(x) = %g", f, g);
	return 0;
}