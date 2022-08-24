/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:40:16 by qduong            #+#    #+#             */
/*   Updated: 2022/08/24 15:54:22 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// int main()
// {
// 	Point to_find(0.9f, 0.9f);
// 	to_find_2(1, 1)
// 	Point a(0, 0);;
// 	Point b(2, 0);
// 	Point c(0, 2);
// 	bool d = bsp(a, b, c, to_find);
// 	std::cout << d << std::endl;
// 	bool d = bsp(a, b, c, to_find_2);
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
	std::cout << "Return value bsp(a,b,c,p1):" << bsp(a,b,c,p1) << std::endl;
	std::cout << "point p2 = " << p2 << std::endl;
	std::cout << "Return value bsp(a,b,c,p2):" << bsp(a,b,c,p2) << std::endl;
	std::cout << "point p3 = " << p3 << std::endl;
	std::cout << "Return value bsp(a,b,c,p3):" << bsp(a,b,c,p3) << std::endl;
	std::cout << "point p4 = " << p4 << std::endl;
	std::cout << "Return value bsp(a,b,c,p4):" << bsp(a,b,c,p4) << std::endl;
	std::cout << "point p5 = " << p5 << std::endl;
	std::cout << "Return value bsp(a,b,c,p5):" << bsp(a,b,c,p5) << std::endl;
	std::cout << "point p6 = " << p6 << std::endl;
	std::cout << "Return value bsp(a,b,c,p6):" << bsp(a,b,c,p6) << std::endl;
	return (0);
}
