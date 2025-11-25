#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i, quantity, a[10], count_negative = 0, count_zero = 0, count_positive = 0; // counters for sizes of massives;
	float enter_value,negative[10], zero[10], positive[10]; // massives for sorting


	printf("How many numbers massive needs? Enter amount: ");
	scanf("%i", &quantity);

	for (i = 0; i <= quantity - 1; i++) {
		printf("enter value of a[%i]=", i);
		scanf("%f", &enter_value);

		a[i]=enter_value;
		
	//putting values into vectors
	if (a[i] < 0) {
		negative[count_negative]=a[i];
		count_negative++;
		}
	else if (a[i] == 0) {
		zero[count_zero] = a[i];
		count_zero++;
		}
	else {
		positive[count_positive] = a[i];
		count_positive++;
		}
	}

	//printing sorted line
	printf("Sorted line is: ");

	for (i = 0; i < count_negative; i++) {
		printf("%0.2f ", negative[i]);
	}
	
	for (i = 0; i < count_positive; i++) {
		printf("%0.2f ", positive[i]);
	}

	for (i = 0; i < count_zero; i++) {
		printf("%0.2f ", zero[i]);
	}

	return 0;
}