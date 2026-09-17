/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:47:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/17 17:44:44 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

template< typename T >
void	printTemplate( T const & print ) {
	std::cout << print << "\n";
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
}
