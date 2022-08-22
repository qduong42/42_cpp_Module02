#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:

		Point();
		Point::Point(float const a, float const b);
		Point(Point const& obj);
		~Point();
		Point& operator=(Point const& obj);
		float get_x(void);
		float get_y(void);
		bool bsp( Point const a, Point const b, Point const c, Point const point);
	private:

		Fixed const _x;
		Fixed const _y;
};

std::ostream & operator<<(std::ostream & o, Point const & input);

#endif
