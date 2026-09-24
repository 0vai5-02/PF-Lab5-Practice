#include <stdio.h>

int main () {
	int year;
	
	printf("Enter the current year: ");
	scanf("%d", &year);
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("It is a Leap year \n");
		printf("Feburary has 29 days.");
	} else {
		printf("It is not a Leap year \n");
		printf("Feburary has 28 days.");
	}
	
	
	return 0;
}
