#include<iostream>
void single(int a) {
	if (a % 100 == 0 && a % 400 != 0) {
		std::cout << a << " = not a leap year \n";
	}
	else if (a % 400 == 0) {
		std::cout << a << " = is a leap year \n";
	}
	else if (a % 4 == 0) {
		std::cout << a << " = is a leap year\n";
	}
	else std::cout << a << " = is not a leap year\n";
}
