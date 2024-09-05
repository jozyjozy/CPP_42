/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:35:32 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
   std::cout << "Base animal constructor called" << std::endl;
   this->type = "Animal";
}

Animal::~Animal()
{
   std::cout << "Base animal destructor called" << std::endl;
}

Animal::Animal(Animal &copie)
{
   this->type = copie.type;
   std::cout << "Constructeur de copie Animal called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
   this->type = rhs.type;
   return (*this);
}

void Animal::makeSound() const
{
	if (this->getType() == "Cat" || this->getType() == "Dog")
		this->makeSound();
	else
		std::cout << "graou graou (weird animal sound)" << std::endl;
}

std::string Animal::getType(void) const
{
   return (this->type);
}
