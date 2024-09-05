/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:24:48 by jlarue            #+#    #+#             */
/*   Updated: 2023/07/03 14:15:14 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
		else if (std::cin.eof())
			return ("Please don't use control + d I am fragile");
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::init(void) {
		std::cin.ignore();
		if (std::cin.eof())
			return ;
    	this->_firstName = this->_getInput(" > Enter first name: ");
		if (std::cin.eof())
			return ;
    	this->_lastName = this->_getInput(" > Enter last name: ");
		if (std::cin.eof())
			return ;
    	this->_nickname = this->_getInput(" > Enter nickname: ");
		if (std::cin.eof())
			return ;
    	this->_phoneNumber = this->_getInput(" > Enter phone number: ");
		if (std::cin.eof())
			return ;
    	this->_darkestSecret = this->_getInput(" > Enter darkest secret: ");
    	std::cout << std::endl;
}

void    Contact::setIndex(int i) {
    this->_index = i;
}

void    PhoneBook::addContact(void) {
    static int  i;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void	Contact::display(int index) const {

	std::string str;
	int	i;

	if (this[index]._firstName.length() <= 0)
		return ;
	std::cout << "         " << this[index]._index << "|";
	i = 0;
	str = this[index]._firstName;
	if (str.length() >= 10)
	{
		str = str.substr(0, 9).append(".|");
		std::cout << str;
	}
	else
	{
		i = str.length();
		while (10 - i != 0)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str << "|";
	}
	i = 0;
	str = this[index]._lastName;
	if (str.length() >= 10)
	{
		str = str.substr(0, 9).append(".|");
		std::cout << str;
	}
	else
	{
		i = str.length();
		while (10 - i != 0)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str << "|";
	}
	i = 0;
	str = this[index]._nickname;
	if (str.length() >= 10)
	{
		str = str.substr(0, 9).append(".|");
		std::cout << str << std::endl;
	}
	else
	{
		i = str.length();
		while (10 - i != 0)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str << "|" << std::endl;
	}
}

void	Contact::fullDisplay(int index) const {

	std::string str;
	if (std::cin.eof())
		return ;
	if (this[index]._firstName.length() <= 0)
	{
		std::cout << "It seems no one had this id little prankster" << std::endl;
		return ;
	}
	if (std::cin.eof())
		return ;
	std::cout << "ID : " <<this[index]._index << std::endl;
	str = this[index]._firstName;
	std::cout << "FIRST NAME : " << str << std::endl;
	str = this[index]._lastName;
	std::cout << "LAST NAME : "<<str << std::endl;
	str = this[index]._nickname;
	std::cout << "NICKNAME : " << str << std::endl;
	str = this[index]._darkestSecret;
	std::cout << "DARKEST SECRET : " << str << std::endl;
    std::string input = "";
}

std::string	PhoneBook::_getIndexWanted(std::string str) const
{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty() && atoi(input.c_str()) >= 0 && atoi(input.c_str()) <= 7)
            valid = true;
		else if (std::cin.eof())
			return ("Please don't use control + d I am fragile");
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    PhoneBook::printContacts(void) const {
	std::cout << "    id    |  1stname | lastname | nickname |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].display(0);
    }
	std::cout << "--------------------------------------------" << std::endl;
	std::cin.ignore();
	if (std::cin.eof())
		return ;
	size_t i = atoi(this->_getIndexWanted(" > Enter id: ").c_str());
	this->_contacts[i].fullDisplay(0);
}

