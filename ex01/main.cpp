/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:29:27 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/28 10:06:06 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int	main()
{
	char	tabChar[5] = {'a', 'z', 'L', '\0', 'K'};
	std::cout << "first version of the array" << std::endl;
	iter(tabChar, 5, print<char>);
	std::cout << std::endl << std::endl;
	std::cout << "decrement" << std::endl;
	iter(tabChar, 5, decrement<char>);
	std::cout << std::endl << std::endl;

	int	tabInt[5] = {0, -2147483648, 127, -3, 17};
	std::cout << "first version of the array" << std::endl;
	iter(tabInt, 5, print<int>);
	std::cout << std::endl << std::endl;
	std::cout << "decrement" << std::endl;
	iter(tabInt, 5, decrement<int>);
	std::cout << std::endl << std::endl;

	int	*tabNULL;
	tabNULL = NULL;
	std::cout << std::endl;
	iter(tabNULL, 7, print<int>);
	iter(tabNULL, 7, decrement<int>);
}
