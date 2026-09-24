#include <stdio.h>

int main () {
	int category, item, quantity, total, singleItemCost;
	
	printf("Enter the category, for Drinks enter 1 or 2 for Food: ");
	scanf("%d", &category);
	
	
	
	switch(category) {
		case 1:
			printf("Enter the Item you want to get: \n");
			printf("1 for Chai \n");
			printf("2 for Lassi \n");
			scanf("%d", &item);
			
			switch (item) {
				case 1:
					singleItemCost = 80;
					break;
				case 2: 
					singleItemCost = 150;
					break;
				default: 
					printf("Enter a valid input");
					return 0;
					break;
			}
			
			break;
		
		case 2:
			printf("Enter the Item you want to get: \n");
			printf("1 for Paratha \n");
			printf("2 for Biryani \n");
			printf("3 for Karahi \n");
			scanf("%d", &item);
			
			
			switch (item) {
				case 1:
					singleItemCost = 60;
					break;
				case 2: 
					singleItemCost = 350;
					break;
				case 3:
					singleItemCost = 900;
					break;
				default: 
					printf("Enter a valid input");
					return 0;
					break;
			}
			
			break;
		
		default:
			printf("enter a valid input");
			return 0;
			break;
		}
		
		printf("enter the quantity of: ");
		scanf("%d", &quantity);
		
		total = quantity * singleItemCost;
		
		if(total > 2000) {
			total = total - (total * 0.1);
		}
		
		printf("Amount Payable: %d", total);
	return 0;
}
