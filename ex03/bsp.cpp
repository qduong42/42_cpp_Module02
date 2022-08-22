//https://mathworld.wolfram.com/TriangleInterior.html#:~:text=The%20simplest%20way%20to
//%20determine,it%20lies%20outside%20the%20triangle.

#include "Point.hpp"
#include "Fixed.hpp"

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed v2x = c.get_x() - a.get_x();
	Fixed v2y = c.get_y() - a.get_y();
	Fixed v1x = c.get_x() - a.get_x();
	Fixed v1y = c.get_y() - a.get_y();
	Fixed h = (point.get_x() * v2y.toFloat() - point.get_x() * v2x - a.get_x() * v2y + a.get_y() * v2x)/ (v1x * v2y - v1y * v2x);
	Fixed k = (-point.get_x() * v1y + point.get_x() * v1x + a.get_x() * v1y - a.get_y() * v1x) / (-v1x * v2y + v1y * v2x);

	if (h > 0 && k > 0 && h + k < 1)
		std::cout << "Point inside triangle!" << std::endl;
	else
		std::cout  << "Point outside triangle!" << std::endl;
}