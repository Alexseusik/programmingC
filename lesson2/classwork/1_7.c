#include <stdio.h>
#include <math.h>

int main()
{
	double num, fraction;
	int digit, smaller, bigger, rounded;

	// без бібліотеки math.h
	scanf("%lf", &num);
	digit = (int)num;
	fraction = num - (float)digit;
	smaller = (int)num;
	bigger = (int)num + 1;



	// з бібліотекою math.h
	double Mfraction, Mdigit, Msmaller, Mbigger;
	Mfraction = modf(num, &Mdigit);
	Msmaller = floor(num);
	Mbigger = ceil(num);


	rounded = roundf(num);

	printf("ціла = %d\n дробова = %f\n найбільше ціле не більше заданого = %d\n найменше ціле більше заданого = %d\n округлене = %d\n\n", digit, fraction, smaller, bigger, rounded);

	
	printf("ціла = %lf\n дробова = %lf\n найбільше ціле не більше заданого = %lf\n найменше ціле більше заданого = %lf\n округлене = %d", Mdigit, Mfraction, Msmaller, Mbigger, rounded);
	return 0;
}