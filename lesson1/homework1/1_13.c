#include <stdio.h>
#include <math.h>

int main()
{
	double x, log;
	printf("x = ");
	scanf("%lf", &x);
	log = log10(x);
	printf("log10(%.2lf) = %.3lf", x, log);
	return 0;
}