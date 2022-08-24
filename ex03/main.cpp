/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:40:16 by qduong            #+#    #+#             */
/*   Updated: 2022/08/24 15:36:56 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"



// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
//     Fixed dX(point.get_x()-c.get_x());
//     Fixed dY(point.get_y()-c.get_y());
//     Fixed dX21(c.get_x()-b.get_x());
//     Fixed dY12( b.get_y()-c.get_y());
//     Fixed D(dY12.toFloat()*(a.get_x()-c.get_x()) + dX21.toFloat()*(a.get_y()-c.get_y()));
//     Fixed s(dY12.toFloat()*dX.toFloat() + dX21.toFloat()*dY.toFloat());
//     Fixed t((c.get_y()-a.get_y())*dX.toFloat() + (a.get_x()-c.get_x())*dY.toFloat());
//     if (D<0) return s<=0 && t<=0 && s+t>=D;
//     return s>=0 && t>=0 && s+t<=D;
// }
// 	if (h > 0 && k > 0 && h + k < 1)
// 	{
// 		std::cout << "Point inside triangle!" << std::endl;
// 		return true;
// 	}
// 	else
// 	{
// 		std::cout  << "Point outside triangle!" << std::endl;
// 		return false;
// 	}
// }

// int main()
// {
// 	Point to_find(0.5f, 0.5f);
// 	Point a(0, 0);
// 	Point b(0, 2);
// 	Point c(2, 0);
// 	bool d = bsp(a, b, c, to_find);
// 	std::cout << d << std::endl;
// }

// int main()
// {
// 	Point to_find(0.9f, 0.9f);
// 	Point a(0, 0);
// 	Point b(2, 0);
// 	Point c(0, 2);
// 	bool d = bsp(a, b, c, to_find);
// 	std::cout << d << std::endl;
// }

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	p1(0, 0);
	Point	p2(10, 0);
	Point	p3(0, 10);
	Point	p4(3, 3);
	Point	p5(5.5f, 5.5f);
	Point	p6(5, 5);

	std::cout << "point a = " << a << std::endl;
	std::cout << "point b = " << b << std::endl;
	std::cout << "point c = " << c << std::endl;
	std::cout << "point p1 = " << p1 << std::endl;
	std::cout << "point p1 = " ;
	bsp(a,b,c,p1);
	std::cout << "point p2 = " << p2 << std::endl;
	std::cout << "point p2 = " ;
	bsp(a,b,c,p2);
	std::cout << "point p3 = " << p3 << std::endl;
	std::cout << "point p3 = " ;
	bsp(a,b,c,p3);
	std::cout << "point p4 = " << p4 << std::endl;
	std::cout << "point p4 = " ;
	bsp(a,b,c,p4);
	std::cout << "point p5 = " << p5 << std::endl;
	std::cout << "point p5 = " ;
	bsp(a,b,c,p5);
	std::cout << "point p6 = " << p6 << std::endl;
	std::cout << "point p6 = " ;
	bsp(a,b,c,p6);
	return (0);
}
