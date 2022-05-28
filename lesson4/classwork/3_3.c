#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a, b, c;
	scanf("%d, %d, %d", &a, &b, &c);

	// For punct a
	if ( (abs(a) < 1024) && (abs(b)<1024) && (abs(c)<1024) ){
		int prod = a*b*c;
		printf("Добуток чисел (усі < 2^10) : %d\n", prod);
	}

	// For punct b
	if ( (abs(a) < pow(2,21)) && (abs(b) < pow(2,21)) && (abs(c) < pow(2,21)) ){
		long int prod1 = a*b*c;
		printf("Добуток чисел (усі < 2^21) : %ld\n", prod1);
	}

	return 0;
}