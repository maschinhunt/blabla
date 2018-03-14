#include <stdio.h>

int main()
{
	int intValue = 1;
	float floatValue = 2.0;
	int* intPointer = &intValue;
	float* floatPointer = &floatValue;
	void* voidPointer;
	
	printf("intValue:     Adressoperator: %p; Pointer: %p\n", &intValue, intPointer);
	printf("floatValue:    Adressoperator: %p; Pointer: %p\n", &floatValue, floatPointer);
	printf("voidPointer ohne Zuweisung: %p\n\n", voidPointer);
	
	*intPointer = 30;
	*floatPointer = 32.0;
	printf("First: %d; Second %.0f\n\n", intValue, floatValue);
	
	intValue = 12;
	floatValue = 13;
	printf("First: %d; Second %.0f\n", *intPointer, *floatPointer);
	
	return 0;
}


