#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	a = abs(a);
	b = abs(b);
	c = abs(c);
	int max = (int)fmax(a, fmax(b, c));
	int min = (int)fmin(a, fmin(b, c));
	printf("Max = %d\n Min = %d", max, min);
	return 0;
}