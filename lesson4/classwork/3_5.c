#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("Число %d більше числа %d", a, b);
	} else {
		printf("Число %d більше числа %d", b, a);
	}
	return 0;
}