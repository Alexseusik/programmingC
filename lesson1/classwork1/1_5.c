#include <stdio.h>

int main()
{
	double x, x4, x6, x9, x15, x28, x64;
	printf("x = ");
	scanf("%lf", &x);
	
	x4 = x*x; //x^2
	x4 = x4*x4; //x^4

	x6 = x*x; //x^2
	x6 = x6*x6; //x^4
	x6 = x6*x*x; //x^6

	x9 = x*x; //x^2
	x9 = x9*x9; //x^4
	x9 = x9*x9; //x^8
	x9 = x9*x; //x^9

	x15 = x*x; //x^2
	x15 = x15*x; //x^3
	x15 = x15*x15; //x^6
	x15 = x15*x15; //x^12
	x15 = x15*x*x*x; //x^15

	x28 = x*x; //x^2
	x28 = x28*x; //x^3
	x28 = x28*x28; //x^6
	x28 = x28*x28; //x^12
	x28 = x28*x28; //x^24
	x28 = x28*x*x*x*x; //x^28

	x64 = x*x; //x^2
	x64 = x64*x64; //x^4
	x64 = x64*x64; //x^8
	x64 = x64*x64; //x^16
	x64 = x64*x64; //x^32
	x64 = x64*x64; //x^64

	printf("x^4 = %lf\n", x4);
	printf("x^6 = %lf\n", x6);
	printf("x^9 = %lf\n", x9);
	printf("x^15 = %lf\n", x15);
	printf("x^28 = %lf\n", x28);
	printf("x^64 = %lf\n", x64);
	return 0;
}