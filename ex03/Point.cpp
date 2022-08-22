#include "Point.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Point::Point():_x(0), _y(0)
{
	return ;
}

Point::Point(float const a, float const b):_x(a), _y(b)
{
	return ;
}

Point::Point(Point const& obj):_x(obj._x), _y(obj._y)
{
	return ;
}

Point& Point::operator=(Point const& obj)
{
	*this = obj;
	return (*this);
}

Point::~Point()
{}

//	MEMBER FUNCTIONS

float Point::get_x(void)
{
	float a;
	a = this->_x.toFloat();
	return (a);
}

float Point::get_y(void)
{
	float a;
	a = this->_y.toFloat();
	return (a);
}

std::ostream & operator<<(std::ostream & o, Point const & input)
{
	o << "(" << input.getX() << "," << input.getY() << ")";
	return (o);
}