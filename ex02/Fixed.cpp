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
Fixed::Fixed(Fixed const& obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; /* shallow vs deep copy? Instance = instance is which?
	Better practice is to use initialisation list: function can be used.
	- this pointer can't be used in init list?
	- this needs to be dereferenced to refer to instance itself and assigning that to ref obj.
	- assigning like this depends on the equal operator overload...*/
	return ;
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

// assignment operator overload => changes function of = variable when used in association with this class.
Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	//this->_integer = obj.getRawBits();
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}

bool Fixed::operator<(Fixed const& obj)const
{
	if (this->getRawBits() < obj.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>(Fixed const& obj)const
{
	if (this->getRawBits() > obj.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const& obj)const
{
	if (this->getRawBits() >= obj.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const& obj)const
{
	if (this->getRawBits() <= obj.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==(Fixed const& obj)const
{
	if (this->getRawBits() == obj.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const& obj)const
{
	if (this->getRawBits() != obj.getRawBits())
		return true;
	else
		return false;
}

Fixed Fixed::operator+(Fixed const& obj)const
{
	return ((Fixed)(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator*(Fixed const& obj)const
{
	return ((Fixed)(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator-(Fixed const& obj)const
{
	return ((Fixed)(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator/(Fixed const& obj)const
{
	return ((Fixed)(this->toFloat() / obj.toFloat()));
}

// pre increment -> integer incremented before return
Fixed& Fixed::operator++(void)
{
	++this->_integer;
	return (*this);
}

// post increment -> integer changed, initial returned
Fixed Fixed::operator++(int)
{
	Fixed copy;
	copy = *this;
	this->_integer++;
	return (copy);
}

// pre increment -> integer incremented before return
Fixed& Fixed::operator--(void)
{
	--this->_integer;
	return (*this);
}

// post increment -> integer changed, initial returned
Fixed Fixed::operator--(int)
{
	Fixed copy;
	copy = *this;
	this->_integer--;
	return (copy);
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

Fixed const& Fixed::min(Fixed const& obj1, Fixed const& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

Fixed & Fixed::max(Fixed & obj1, Fixed & obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

Fixed const& Fixed::max(Fixed const& obj1, Fixed const& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

std::ostream& operator <<(std::ostream& o, Fixed const& fp)
{
	o << fp.toFloat();
	return o;
}

/* Is there a way to introduce error handling for same values without using pointer?
Fixed* Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (&obj1);
	else if (obj1.getRawBits() == obj2.getRawBits())
	{
		std::cout << "Both are the same value!" << std::endl;
		return (NULL);
	}
	else
		return (&obj2);
}

std::ostream& operator <<(std::ostream& o, Fixed* fp)
{
	if (fp == NULL)
	{
		o << "Both are same value!" << std::endl;
	}
	else
		o << fp->toFloat();
	return o;
} */