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

	return 0;
}