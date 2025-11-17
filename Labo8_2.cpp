#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>

int main() {

	int i, quantity;
	float enter_value;

	std::vector <float> a;

	//sort numbers into 3 vectors
	struct SortElements {
		std::vector <float> negative;
		std::vector <float> zero;
		std::vector <float> positive;
	};

	SortElements sorted_numbers;

	printf("How many numbers massive needs? Enter amount: ");
	scanf("%i", &quantity);

	for (i = 0; i <= quantity - 1; i++) {
		printf("enter value of a[%i]=", i);
		scanf("%f", &enter_value);

		a.push_back(enter_value);
		
	//putting values into vectors
	if (a[i] < 0) {
		sorted_numbers.negative.push_back(a[i]);
		}
	else if (a[i] == 0) {
		sorted_numbers.zero.push_back(a[i]);
		}
	else {
		sorted_numbers.positive.push_back(a[i]);
		}
	}

	//printing sorted line
	printf("Sorted line is: ");

	for (i = 0; i < sorted_numbers.negative.size(); i++) {
		printf("%0.2f ", sorted_numbers.negative[i]);
	}
	
	for (i = 0; i < sorted_numbers.positive.size(); i++) {
		printf("%0.2f ", sorted_numbers.positive[i]);
	}

	for (i = 0; i < sorted_numbers.zero.size(); i++) {
		printf("%0.2f ", sorted_numbers.zero[i]);
	}

	return 0;
}