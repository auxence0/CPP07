/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:02:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 18:44:34 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template< typename T >
Array<T>::Array() {
	array_ = NULL;
}

template< typename T >
Array<T>::Array( unsigned int n ): array_(new T[n]), index_max_(n) {

}

template< typename T >
Array<T>::Array( const Array & obj ): array_(new T[obj.index_max_]), index_max_(obj.index_max_) {
	for (unsigned int i = 0; i < index_max_; ++i)
		array_[i] = obj.array_[i];
}

template< typename T >
Array<T>&	Array<T>::operator=( const Array & rhs ) {
	if (this != &rhs) {
		delete[]	array_;
		index_max_ = rhs.index_max_;
		array_ = new T[index_max_];
		for (unsigned int i = 0; i < index_max_; ++i)
			array_[i] = rhs.array_[i];
	}
	return *this;
}

template< typename T >
Array<T>::~Array() {
	delete[] array_;
}

template< typename T >
T&	Array<T>::operator[]( unsigned int n ) {
	if (!array_)
		throw	std::runtime_error("Array is'nt allocate\n");
	if (n < index_max_)
		return	array_[n];
	throw	std::runtime_error("Index out of array\n");
}

template< typename T >
T const &	Array<T>::operator[]( unsigned int n ) const {
	if (!array_)
		throw	std::runtime_error("Array is'nt allocate\n");
	if (n < index_max_)
		return	array_[n];
	throw	std::runtime_error("Index out of array\n");
}

template<typename T >
unsigned int	Array<T>::size() const {
	return	index_max_;
}

#endif