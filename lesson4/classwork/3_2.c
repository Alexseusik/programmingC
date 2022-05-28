#include <stdio.h>

int main()
{
	unsigned int num, hun, des, dig;
	scanf("%u", &num);
	hun = num/100;
	des = (num-hun*100)/10;
	dig = num - (hun*100) - (des*10);

	if ((hun != des) && (hun != dig) && (des != dig)){
		unsigned int num1 = num;
		unsigned int num2 = (hun*100) + (dig*10) + des;
		unsigned int num3 = (des*100) + (dig*10) + hun;
		unsigned int num4 = (des*100) + (hun*10) + dig;
		unsigned int num5 = (dig*100) + (des*10) + hun;
		unsigned int num6 = (dig*100) + (hun*10) + des;
		printf("Усі можливі перестановки:\n %u\n %u\n %u\n %u\n %u\n %u\n", num1, num2, num3, num4, num5, num6);
	}
	else {
		printf("!Числа не різні!");
	}
	return 0;
}