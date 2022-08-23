/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:40:16 by qduong            #+#    #+#             */
/*   Updated: 2022/08/23 17:09:32 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed v2x (c.get_x() - a.get_x());
	Fixed v2y (c.get_y() - a.get_y());
	Fixed v1x (b.get_x() - a.get_x());
	Fixed v1y (b.get_y() - a.get_y());
	Fixed h = (((point.get_x() * v2y.toFloat() - point.get_x() * v2x.toFloat()) - (a.get_x() * v2y.toFloat() - a.get_y() * v2x.toFloat()))/ (v1x.toFloat() * v2y.toFloat() - v1y.toFloat() * v2x.toFloat()));
	Fixed k = - (((point.get_x() * v1y.toFloat() - point.get_y() * v1x.toFloat()) - (a.get_x() * v1y.toFloat() - a.get_y() * v1x.toFloat())) / (v1x.toFloat() * v2y.toFloat() - v1y.toFloat() * v2x.toFloat()));

	if (h > 0 && k > 0 && h + k < 1)
	{
		std::cout << "Point inside triangle!" << std::endl;
		return true;
	}
	else
	{
		std::cout  << "Point outside triangle!" << std::endl;
		return false;
	}
}

int main()
{
	Point to_find(5, 5.05);
	Point a(0, 1);
	Point b(5, 1);
	Point c(5, 5);
	bool d = bsp(a, b, c, to_find);
	std::cout << d << std::endl;
}