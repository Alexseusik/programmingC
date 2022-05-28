#include <stdio.h>

int main()
{
	unsigned int num;
	scanf("%u", &num);
	
	//Punct a//
	unsigned int hun = num/100;
	unsigned int des = (num-hun*100)/10;
	unsigned int dig = num - (hun*100) - (des*10);
	printf("Сотні :%u\n Десятки :%u\n Одиниці :%u\n\n", hun, des, dig);

	//Punct b//
	printf("Сума цифр: %u\n\n", hun+des+dig);

	//Punct c//

	printf("Число зправа на ліво: %u\n\n", (dig*100) + (des*10) + hun);
	return 0;
}