#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>

int main() {

	int i, quantity;
	float enter_value;

	std::vector <float> a;

	printf("How many numbers massive needs? Enter amount: ");
	scanf("%i", &quantity);

	for (i = 0, i <= quantity - 1; i++) {
		printf("enter value of massive number %i", i);
		scanf("%f", &enter_value);

		a.push_back(enter_value);
	}

	return 0;
}