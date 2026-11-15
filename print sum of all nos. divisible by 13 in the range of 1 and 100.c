#include <stdio.h>

int main(void) {
	int sum = 0;

	for (int number = 1; number <= 100; number++) {
		if (number % 13 == 0) {
			sum += number;
		}
	}

	printf("Sum: %d\n", sum);
	return 0;
}
