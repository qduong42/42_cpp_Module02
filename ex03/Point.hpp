#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:

		Point();
		Point(float const a, float const b);
		Point(Point const& obj);
		~Point();
		Point const & operator=(Point const& obj);
		float get_x(void)const;
		float get_y(void)const;
	private:

		Fixed const _x;
		Fixed const _y;
};

std::ostream & operator<<(std::ostream & o, Point const & input);

#endif
