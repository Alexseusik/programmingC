#include <stdio.h>

int main()
{
	float C, F;
	printf("C = ");
	scanf("%f", &C);
	F = ((9.0f*C)/5.0f)+32.0f;
	printf("F = %.0f", F);
	return 0;
}