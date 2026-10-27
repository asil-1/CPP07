/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:06:23 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/27 10:19:48 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << BOLD << "int" << NC << std::endl;
	int	a = 4;
	int	b = 16;

	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << a << std::endl << b << std::endl;
	swap(&a, &b);
	std::cout << "swap" << std::endl
		<< a << std::endl << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

	std::cout << std::endl << BOLD << "char" << NC << std::endl;
	char	c = 'c';
	char	d = 'd';

	std::cout << "min: " << min(c, d) << std::endl;
	std::cout << "max: " << max(c, d) << std::endl;
	std::cout << c << std::endl << d << std::endl;
	swap(&c, &d);
	std::cout << "swap" << std::endl
		<< c << std::endl << d << std::endl;
	std::cout << "min: " << min(c, d) << std::endl;
	std::cout << "max: " << max(c, d) << std::endl;
}
