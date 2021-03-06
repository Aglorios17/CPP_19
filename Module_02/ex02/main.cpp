/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <aglorios@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:00:34 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/05 00:26:17 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed	a;
	Fixed	f;
	Fixed	d(20);
	Fixed	c;
	Fixed	e(5);
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "/////////// TESTER ALL /////" << std::endl;
	c  = e < d;
	std::cout << "< "<< c << std::endl;
	c  = e > d;
	std::cout << "> "<< c << std::endl;
	c  = e <= d;
	std::cout << "<= "<< c << std::endl;
	c  = e >= d;
	std::cout << ">= "<< c << std::endl;
	c  = e != d;
	std::cout << "!= "<< c << std::endl;
	c  = e == d;
	std::cout << "== "<< c << std::endl;
	c  = e + d;
	std::cout << "+ "<< c << std::endl;
	c  = d - e;
	std::cout << "- "<< c << std::endl;
	c  = d / Fixed(0);
	std::cout << "/ "<< c << std::endl;
	std::cout << f << std::endl;
	std::cout << ++f << std::endl;
	std::cout << f << std::endl;
	std::cout << f++ << std::endl;
	std::cout << f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;
	std::cout << ++f << std::endl;
	std::cout << Fixed::min(Fixed(2), b) << std::endl;
	std::cout << "/////////// MAIN TESTER /////" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
