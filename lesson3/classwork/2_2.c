#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	printf("Введіть значення катетів через пробіл: ");
	scanf("%lf %lf", &a, &b);
	c = sqrt(pow(a,2)+pow(b,2));
	printf("Гіпотенуза с = %g", c);
	return 0;
}