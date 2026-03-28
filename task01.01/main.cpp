#include <iostream>
using namespace std;

int sum(int number) {
	if (number < 0) {
		return -1;
	}

	if (number <= 9) {
		return number;
	}

	return sum(number / 10) + number % 10;
}

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	cout << "sum of numbers are " << sum(number);

	return 0;
}