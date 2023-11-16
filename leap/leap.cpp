#include<iostream>
#include"single.h"
void foo();
void leap_year(int a, int b) {
	for (a; a < b; a++) {
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
}
int main() {
	std::cout << "1.between years\n2.single year\n";
	int op{};
	std::cin >> op;
	switch (op) {
	case 1: {int a{};
		  int b{};
	  std::cout << "enter the years \n";
	  std::cin >> a;
	  std::cin >> b;
	  leap_year(a, b);
	}

	case 2:std::cout << "enter the year : \n";
		int a{};
		std::cin >> a;
		single(a);
	}
	foo();
	
}