/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:16:43 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/28 17:29:29 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <class T>
Array<T>::Array() : _size(0), _array(NULL) {}

template <class T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]()) {}

template <class T>
Array<T>::Array(const Array& other) : _size(0), _array(NULL) { *this = other; }

template <class T>
Array<T>	&Array<T>::operator=(const Array& other) {
	if (this != &other)
	{
		_size = other._size;
		delete[] _array;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	return *this;
}

template <class T>
Array<T>::~Array() { delete[] _array; }

template <class T>
T	&Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw Array<T>::OutOfBounds();
	return _array[index];
}

template <class T>
const T	&Array<T>::operator[](unsigned int index) const {
	if (index >= _size)
		throw Array<T>::OutOfBounds();
	return _array[index];
}

template <class T>
unsigned int	Array<T>::size() const { return _size; }

template <class T>
const char	*Array<T>::OutOfBounds::what() const throw() {
	return "The index is out of bounds";
}

#endif
