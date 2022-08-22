/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:40:16 by qduong            #+#    #+#             */
/*   Updated: 2022/08/22 22:21:39 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point to_find(2.5, 1.2);
	Point a(0, 1);
	Point b(5, 1);
	Point c(5, 5);
	bool d = Point::bsp(a, b, c, to_find);
	std::cout << d << std::endl;
}