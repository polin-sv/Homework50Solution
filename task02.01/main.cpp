#include <iostream>
using namespace std;

bool is_the_number_power_of_three(int number) {
	if (number <= 0) {
		return false;
	}

	if (number == 3) {
		return true;
	}

	return is_the_number_power_of_three(number / 3);
}

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	string s = is_the_number_power_of_three(number) ? "yes" : "no";

	cout << "is it power of three? " << endl;
	cout << s;

	return 0;
}