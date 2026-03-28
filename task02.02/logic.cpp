#include "logic.h"

bool is_the_number_power_of_three(int number) {
	if (number < 0) {
		return false;
	}
	while (number > 0) {

		if (number == 3) {
			return true;
		}
		number /= 3;
	}
	return false;
}