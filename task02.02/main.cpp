#include "logic.h"

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	string s = is_the_number_power_of_three(number) ? "yes" : "no";

	cout << "is it power of three? " << endl;
	cout << s;

	return 0;
}