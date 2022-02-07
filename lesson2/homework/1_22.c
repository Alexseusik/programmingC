#include <stdio.h>

int main()
{
	long long int num;
	printf("ВВедите число в 16-ричном представлении (начиная с 0x...)  ");
	scanf("%llX", &num);
	printf("число в 16-ричном представлении уменьшеное на единицу 0x%llX\n", (num-1));
	printf("число в 10-ричном представлении уменьшеное на единицу %lld\n", (num-1));
	return 0;
}