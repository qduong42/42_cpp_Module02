#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a(-4.8f);
	Fixed b(9.6f);
	if (a < b)
		std::cout << " a is smaller than b" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if (b > a)
		std::cout << " b is bigger than a" << std::endl;
	else
		std::cout << "fail" << std::endl;
	return 0;
}