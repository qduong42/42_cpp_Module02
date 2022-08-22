#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10.05f);
	Fixed d(5.05f);
	std::cout << a << std::endl; //0
	std::cout << ++a << std::endl; // 0.00390625
	std::cout << a << std::endl; // 0.00390625
	std::cout << a++ << std::endl; // 0.00390625
	std::cout << a << std::endl; // 0.0078125
	std::cout << b << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;
	return 0;
}

/*$> ./a.out
a= 0
++a =0.00390625
a = 0.00390625
a++ = 0.00390625
a = 0.0078125
b = 10.1016
max(a, b) = 10.1016
$>
*/