/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:47:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/18 09:57:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

template< typename T >
void	printTemplate( T const & print ) {
	std::cout << print << "\n";
}

template< typename T >
void	IncrementType( T & Type ) {
	++Type;
}

int	main() {
	std::string	str[] = {"abcdef",
						 "banane",
						 "hihi"
	};
	std::cout << "TEST DISPLAY STR\n";
	iter(str, 3, printTemplate<std::string>);

	std::cout << "\nTEST DISPLAY INT\n";
	int	int_array[] = {1, 2, 4, 7};
	iter(int_array, 4, printTemplate<int>);
	std::cout << "\nTEST DISPLAY CHAR\n";
	char	string[] = "miaou";
	iter(string, 5, printTemplate<char>);
	std::cout << "\nTEST INCREMENT CHAR\n";
	iter(string, 5, IncrementType<char>);
	iter(string, 5, printTemplate<char>);
	std::cout << "\nTEST INCREMENT INT\n";
	iter(int_array, 4, IncrementType<int>);
	iter(int_array, 4, printTemplate<int>);
}
