#include "logic.h"

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	cout << "max digit is " << find_max_digit(number);

	return 0;
}