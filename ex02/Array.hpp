/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:38:35 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/28 16:34:27 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

template <class T>
class	Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array &operator=(const Array& other);
		~Array();

		T				&operator[](unsigned int index);
		const T			&operator[](unsigned int index) const;
		unsigned int	size() const;

		class	OutOfBounds : public std::exception {
			public:
				const char	*what() const throw();
		};

	private:
		unsigned int	_size;
		T*				_array;
};

#include "Array.tpp"

#endif
