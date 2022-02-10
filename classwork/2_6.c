#include <stdio.h>
#include <math.h>

int main()
{
	double x_a, y_a, x_b, y_b, x_c, y_c, AB, BC, AC, p, S ;
	scanf("%lf %lf", &x_a, &y_a);
	printf("\n");
	scanf("%lf %lf", &x_b, &y_b);
	printf("\n");
	scanf("%lf %lf", &x_c, &y_c);
	AB = sqrt(pow((x_b-x_a), 2) + pow((y_b-y_a),2));
	BC = sqrt(pow((x_b-x_c), 2) + pow((y_b-y_c),2));
	AC = sqrt(pow((x_a-x_c), 2) + pow((y_a-y_c),2));
	p = (AB + BC + AC)/2;
	S = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	printf("Площа трикутника = %g\n", S);
	return 0;
}