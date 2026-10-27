/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:55:17 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/27 09:59:31 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATERVER_HPP
# define WHATERVER_HPP

# include <iostream>

# define BOLD "\033[1;39m"
# define NC "\033[0m"

template <typename T>
void	swap(T *a, T *b)
{
	T	tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}

#endif