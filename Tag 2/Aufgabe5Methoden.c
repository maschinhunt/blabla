#include <stdio.h>

void dropBottle(int *order, int* balance,  int amount){
	int price = 2;
	if(*order >= amount){
		*balance += amount * price;
		*order -= amount;
	} else {
		amount = *order;
		*balance += amount * price;
		*order -= amount;
		printf("Nur noch %d Flaschen uebrig! \n", &order);
	}
	
	printf("Hier: %d Flaschen: \n", amount);
	for(int i = 0; i < amount; i++){
			printf("   ––––   \n");
			printf("  |    |  \n");
			printf(" /      \\ \n");
			printf("|        |\n");
			printf("|        |\n");
			printf("| WASSER |\n");
			printf("|        |\n");
			printf("|________|\n");	
		}
}

int idle(){
	int cash = 0;
	int bottles = 50;
	
	while(bottles > 0){
		int orderBottles = 0;
		printf("Noch %d Flaschen im Automat. \n", bottles);
		printf("Wie viele Flaschen willst du? \n");
		scanf("%d", &orderBottles);
		
		dropBottle(&orderBottles, &cash, bottles);
		
		if(cash >= 50){
			printf("\n Die Geldkasette muss geleert werden! \n");
		}
	}
	
	printf("\n Keine Flaschen übrig! \n");
	return 1;
}

