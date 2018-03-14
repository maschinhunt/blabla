#include <stdio.h>

void auslesen(int* Array);
void einlesen(int* Array);

int main()
{
	int messwertArray[12];
	int* pointmesswertArray = messwertArray; 
	
	einlesen(pointmesswertArray);
	auslesen(pointmesswertArray);
	
	return 0;
}

void einlesen(int* Array) {
	printf("Bitte geben sie die 12 Messwerte ein: \n");
	for(int i = 0; i < 12; i++){
		scanf("%d", Array+i);
	}
}

void auslesen(int* Array) {
	printf("Die eingegebenen Werte sind : \n");
	for(int i = 0; i < 12; i++){
		printf("%d\n", *(Array+i));
	}
}

