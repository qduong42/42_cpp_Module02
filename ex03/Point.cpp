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

Point const& Point::operator=(Point const& obj)
{
	(void) obj;
	return (*this);
}

Point::~Point()
{}

//	MEMBER FUNCTIONS

float Point::get_x(void)const
{
	float a;
	a = this->_x.toFloat();
	return (a);
}

float Point::get_y(void)const
{
	float a;
	a = this->_y.toFloat();
	return (a);
}

std::ostream & operator<<(std::ostream & o, Point const & input)
{
	o << "(" << input.get_x() << "," << input.get_y() << ")";
	return (o);
}