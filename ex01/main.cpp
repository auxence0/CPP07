/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:47:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 16:45:33 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

void	printStr( std::string const & str ) {
	std::cout << str << "\n";
}

void	printIntPlusOne( int n ) {
	std::cout << n + 1 << "\n";
}

int	main() {
	std::string	str[] = {"abcdef",
						 "banane",
						 "hihi"
	};
	std::cout << "TEST DISPLAY STR\n";
	iter(str, 3, printStr);

	std::cout << "\nTEST DISPLAY INT\n";
	int	int_array[] = {1, 2, 4, 7};
	iter(int_array, 4, printIntPlusOne);
}
