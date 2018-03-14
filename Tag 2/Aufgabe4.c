#include <stdio.h>

void swapInput(double* firstInputPointer, double* secondInputPointer);

int main()
{
	double firstInput = 0.0;
	double secondInput = 0.0;
	printf("Bitte geben sie die 2 Fliesskommazahlen ein: \n");
	scanf("%lf", &firstInput);
	scanf("%lf", &secondInput);
	printf("firstInput: %lf; secondInput: %lf \n", firstInput, secondInput);
	swapInput(&firstInput, &secondInput);
	printf("firstInput: %lf; secondInput: %lf \n", firstInput, secondInput);
	
	return 0;
}

void swapInput(double* firstInputPointer, double* secondInputPointer){
	double useless = *firstInputPointer;
	*firstInputPointer = *secondInputPointer;
	*secondInputPointer = useless;
}
