/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 10:46:50 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 16:41:51 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T, typename F >
void	iter( T* addr, size_t const & len, F func ) {
	for (size_t i = 0 ; i < len; ++i)
		func(addr[i]);
}

#endif