/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:42:38 by jozy              #+#    #+#             */
/*   Updated: 2023/08/29 12:02:46 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout <<  GREEN << "Harl constructor" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << GREEN << "Harl destructor" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << PURPLE << "[DEBUG]   "  << WHITE ;
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-makeketchup burger. I really do !" << std::endl;
}

void	Harl::info( void )
{
	std::cout << BLUE << "[INFO]    "  << WHITE ;
	std::cout << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW << "[WARNING] "  << WHITE ;
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << ROUGE << "[ERROR]   "  << WHITE ;
	std::cout << " This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string type)
{
	int			i;
	void		(Harl::*pointeur[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	types[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (types[i] == type)
		{
			(this->*pointeur[i])();
			break ;
		}
		i++;
	}
}
