#include <stdio.h>

int main () {
	int interPercentage, testScore;
	
	printf("Enter the percentage obtained in your Intermideate: ");
	scanf("%d", &interPercentage);
	
	printf("Enter the test score obtained in the entry test: ");
	scanf("%d", &testScore);
	
	
	
	if(interPercentage >= 60 && interPercentage <=100) {
		if(testScore >= 80) {
			printf("Admitted with Merit Scholarship");
		} else if (testScore >= 50 && testScore <= 79) {
			printf("Admitted");
		} else {
			printf("Not Admitted");
		}
	} else if(testScore < 60) {
		printf("Not Eligible");
	} else {
		printf("Inavlid Input");
	}
	
	return 0;
}
