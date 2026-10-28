/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:29:25 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/28 10:00:25 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <limits.h>

template <typename T, typename F>
void	iter(T *array, const size_t lenght, F funct)
{
	if (!array)
	{
		std::cerr << "The array doesn't exist" << std::endl;
		return;
	}
	for (size_t i = 0; i < lenght; i++)
		funct(array[i]);
}

template <typename T>
void	print(const T& value)
{
	std::cout << value << "|";
}

template <typename T>
void	decrement(T& value)
{
	std::cout << value << "->";
	value--;
	std::cout << value << " | ";
}

#endif
