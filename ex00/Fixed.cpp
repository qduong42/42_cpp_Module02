#include "Fixed.hpp"

//	CONSTRUCTORS | DESTRUCTOR

// const int _nFracBits = 8;

Fixed::Fixed():_integer(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy constructor: creates 
Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called" << std::endl;
	this->_integer = obj.getRawBits(); /* I put this here because of the stupid output example: 
	I think better practice is to initialize in initialisation list.? */
	return ;
}

// assignment operator overload => changes function of = variable when used in association with this class.
Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->_integer = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//	MEMBER FUNCTIONS

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void Fixed::setRawBits(int const raw)
{
	(void) raw;
	std::cout << "Setter called" << std::endl;
	return ;
}