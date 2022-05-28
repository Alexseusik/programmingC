#include <stdio.h>
#include <math.h>

int main()
{
	//for equation ax^2+bx+c=0//
	double a, b, c, D;
	printf("Введіть значення коефіцієнтів а, b, c для квадратного рівняння: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	D = pow(b, 2) - 4*a*c;
	if (a == 0)
	{
		printf("коефіцієнт а дорівнює нулю:(");
	} else {
			if (D < 0) {
			printf("Дискрімінант від'ємний :(");
		} else  {
			if (D > 0)
			{
				double x1 = (-b + sqrt(D))/(2*a);
				double x2 = (-b - sqrt(D))/(2*a);
				printf("Корені рівняння x1 = %lf x2 = %lf", x1, x2);
			} else {
				double x = (-b)/(2*a);
				printf("Дискрімінант дорівнює нулю, один корінь x = %lf", x);
			}
		}
	} 
	return 0;
}