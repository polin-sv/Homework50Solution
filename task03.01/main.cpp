#include <iostream>
using namespace std;

int find_max_digit(int number) {
	if (number <= 9) {
		return number;
	}
	int max = find_max_digit(number / 10);
	return (number % 10 > max) ? number % 10 : max;
}

int main() {
	int number;
	cout << "input your number: ";
	cin >> number;

	cout << "max digit of number is " << find_max_digit(number);

	return 0;
}