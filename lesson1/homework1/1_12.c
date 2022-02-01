#include <stdio.h>

int main()
{
	double T;
	T = 365.0f + 1.0f/(4.0f+1.0f/(7.0f+1.0f/(1.0f + 1.0f/3.0f)));
	printf("Period = %lf", T); 
	return 0;
}