/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:21:18 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 13:49:44 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
    PhoneBook book;
    std::string input = "";
	book.welcome();
    while (input.compare("EXIT") && std::cin.eof() == 0)
	{
        std::cout << "> " << std::flush;
		std::cin >> input;
		if (input.compare("ADD") == 0)
    		book.addContact();
		else if (input.compare("SEARCH") == 0)
			book.printContacts();
		else if (input.compare("EXIT") != 0)
			std::cout << "You can choose to either ADD, EXIT or SEARCH\n" << std::flush;
	}
	book.goodbye();
    return 0;
}
