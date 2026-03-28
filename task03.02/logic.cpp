#include "logic.h"

int find_max_digit(int number) {
	if (number <= 9) {
		return number;
	}

	int digit;
	int max = 0;

	while (number > 0) {
		digit = number % 10;
		if (digit > max) {
			max = digit;
		}
		number /= 10;
	}
	return max;
}