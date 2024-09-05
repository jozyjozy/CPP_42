/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:24:48 by jlarue            #+#    #+#             */
/*   Updated: 2023/07/03 12:27:36 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::welcome(void) const
{
	std::cout << "  ====================================================== \n";
	std::cout << "           Welcome in your Awesome-Phonebook              \n";
}

void    PhoneBook::goodbye(void) const
{
	std::cout << "\n      We hope you loved your homemade rappel-tout         \n";
	std::cout << "  ====================================================== \n";
}
