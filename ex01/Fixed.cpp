#include "Fixed.hpp"

//	CONSTRUCTORS | DESTRUCTOR
//	const int _nFracBits = 8;

Fixed::Fixed():_integer(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/**
 * custom constructor converting int to fixed-point value. frac bits = 8;
 * 
 * @param number 
 */
Fixed::Fixed(int const i_number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_integer = i_number * (1 << _nFracBits);
	return ;
}
/**
 * custom constructor converting float to fixed point value to store in int container.
 * 
 * @param number 
 */
Fixed::Fixed(float const f_number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_integer = roundf(f_number * (1 << _nFracBits));
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * 
 * @param obj obj reference to object instance given Fixed const& obj
 */
Fixed::Fixed(Fixed const& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

// assignment operator overload => changes function of = variable when used in association with this class.
Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	//this->_integer = obj.getRawBits();
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
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
	this->_integer = raw;
	std::cout << "Setter called" << std::endl;
	return ;
}

int Fixed::toInt(void)const
{
	int i;
	i = this->_integer / (1 << _nFracBits);
	return i;
}

//need to typecast int into float, so that its stored as float. One typecast is enough..?
float Fixed::toFloat(void)const
{
	float f;
	f = (float) this->_integer / (float)(1 << _nFracBits);
	return f;

}

std::ostream& operator <<(std::ostream& o, Fixed const& fp)
{
	o << fp.toFloat();
	return o;
}
