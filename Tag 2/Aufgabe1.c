#include <stdio.h>
#include <stdbool.h>

bool checkAge(int age);

int main()
{
	int age;
	printf("Geben sie bitte ihr Alter ein: ");
	scanf("%d", &age);
	
	if(checkAge(age)){
		printf("Sie sind verpflichtet sich ausweisen zu können, bitte zeigen sie ihren Ausweis!\n");
	}else{
		printf("Sie sind nicht verpflichtet sich ausweisen zu können!\n");
	}
	
	return 0;
}

bool checkAge(int age){
	if(age >= 16){
		return true;
	}
	return false;
}

