#include <stdio.h>

int main()
{
	double m, v, T;
	printf("Введите массу в киллограммах = ");
	scanf("%lf", &m);
	printf("Введите скорость в м/с = ");
	scanf("%lf", &v);
	T = (m*v)/2.0f;
	printf("Енергия составляет %.2lf Дж", T);
	return 0;
}