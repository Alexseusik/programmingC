#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, p, S;
	printf("Введіть через пробіл 3 сторони трикутника: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a+b+c)/2;						// p - полупериметер
	S = sqrt(p*(p-a)*(p-b)*(p-c));		// S - площа
	printf("Площа трикутника: %g", S);
	return 0;
}