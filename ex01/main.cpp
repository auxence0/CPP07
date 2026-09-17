/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:47:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 16:42:24 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

void	printStr( std::string const & str ) {
	std::cout << str << "\n";
}

int	main() {
	std::string	str[] = {"abcdef",
						 "banane",
						 "hihi"
	};
	iter(str, 3, printStr);
}
