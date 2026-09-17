/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:47:12 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 18:43:58 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template< typename T >
class	Array {
	public:
		Array();
		Array( unsigned int n );
		Array( const Array & obj );
		~Array();
		Array&	operator=( const Array & rhs );
		T&		operator[]( unsigned int n );
		T const &	operator[]( unsigned int n ) const;
		unsigned int	size() const;
	private:
		T*				array_;
		unsigned int	index_max_;
};

#include "Array.tpp"

#endif