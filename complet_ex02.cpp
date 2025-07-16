int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << b + a << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}

//------my main--------

#include <iostream>
#include "Fixed.hpp"

int main() {
	std::cout << std::boolalpha; // true/false

	Fixed a(10);          // Int constructor
	Fixed b(42.42f);      // Float constructor
	Fixed c(10);          // Int constructor
	Fixed d(2);
	Fixed e(0.5f);

	std::cout << "=== Comparison Operators ===" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= c: " << (a >= c) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "\n=== Arithmetic Operators ===" << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "d * e = " << (d * e) << std::endl;
	std::cout << "b / d = " << (b / d) << std::endl;


	Fixed result = (a + b) * e;
	std::cout << "\n(a + b) * e = " << result << std::endl;

	return 0;
}
