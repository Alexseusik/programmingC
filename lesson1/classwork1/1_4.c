#include <stdio.h>

int main()
{
	double G, m1, m2, r, F;
	G = 6.673e-11;
	printf("m1 = ");
	scanf("%lf", &m1);
	printf("m2 = ");
	scanf("%lf", &m2);
	printf("r = ");
	scanf("%lf", &r);
	F = G*(m1*m1)/(r*r);
	printf("%8.2E", F);
	return 0;
}