#include <stdio.h>

int main()
{
	int num_16, num_10;
	printf("ВВедите число в 16-ричном представлении (начиная с 0x...)  ");
	scanf("%x", &num_16);
	num_10 = (int)num_16;
	printf("число в 16-ричном представлении уменьшеное на единицу 0x%x\n", (num_16-1));
	printf("число в 10-ричном представлении уменьшеное на единицу %d\n", (num_10-1));
	return 0;
}