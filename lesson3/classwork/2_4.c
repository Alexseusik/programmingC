#include <stdio.h>
#include <math.h>

int main()
{
	int x, y1, y2, y3, y4, y5, y6;
	printf("Введіть число х:  ");
	scanf("%lf", &x);
	y1 = pow(x,4) + 2 * pow(x,2) + 1;
	y2 = pow(x,4) + pow(x,3) + pow(x,2) + x + 1;
	y3 = pow(x,5) + 5*pow(x,4) + 10*pow(x,3) + 10*pow(x,2) + 5*x + 1;
	y4 = pow(x,9) + pow(x,3) + 1;
	y5 = 16*pow(x,4) + 8*pow(x,3) + 4*pow(x,2) + 2*x + 1;
	y6 = pow(x,5) + pow(x,3) + x;
	printf("y1 = %g\n y2 = %g\n y3 = %g\n y4 = %g\n y5 = %g\n y6 = %g\n", y1, y2, y3, y4, y5, y6);
	return 0;
}