/* https://mathworld.wolfram.com/TriangleInterior.html#:~:text=The%20simplest%20way%20to
%20determine,it%20lies%20outside%20the%20triangle. */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed v2x (c.get_x() - a.get_x()); // cx_ax
	Fixed v2y (c.get_y() - a.get_y()); // cy_ay
	Fixed v1x (b.get_x() - a.get_x()); // bx_ax
	Fixed v1y (b.get_y() - a.get_y()); // by_ay
	Fixed h(((point.get_x() * v2y.toFloat() - point.get_x() * v2x.toFloat()) - (a.get_x() * v2y.toFloat() - a.get_y() * v2x.toFloat()))/ 
	(v1x.toFloat() * v2y.toFloat() + v1y.toFloat() * v2x.toFloat()));
	Fixed k(-(((point.get_x() * v1y.toFloat() - point.get_y() * v1x.toFloat()) - (a.get_x() * v1y.toFloat() - a.get_y() * v1x.toFloat())) / (v1x.toFloat() * v2y.toFloat() - v1y.toFloat() * v2x.toFloat())));
	std::cout << h.toFloat() << std::endl;
	std::cout << k.toFloat() << std::endl;
	if (h > 0 && k > 0 && (h + k) < 1)
	{
		std::cout << "Point inside triangle!" << std::endl;
		return true;
	}
	else
	{
		if (h > 0 && k > 0 && (h + k) == 1)
			std::cout << "Point right on the line" << std::endl;
		else
			std::cout  << "Point outside triangle!" << std::endl;
		return false;
	}
}
