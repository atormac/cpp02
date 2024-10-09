#include "Fixed.hpp"
#include <iostream>

int main(void)
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(1.0f);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "a / b: " << a / b << std::endl;

	std::cout << "++c: " << ++c << std::endl;
	std::cout << "c++: " << c++ << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "--c: " << --c << std::endl;
	std::cout << "c--: " << c-- << std::endl;

	return (0);
}
