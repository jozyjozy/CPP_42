/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:05:47 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 12:06:59 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
   std::cout << "Base WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
   std::cout << "Base WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copie)
{
   this->type = copie.type;
   std::cout << "Constructeur de copie WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
   this->type = rhs.type;
   return (*this);
}

void WrongAnimal::makeSound() const
{
	if (this->getType() == "WrongCat")
		std::cout << "MiAoUMiaOu (WrongCat)" << std::endl;
	else
		std::cout << "graou graou (WrongAnimal)" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
   return (this->type);
}
