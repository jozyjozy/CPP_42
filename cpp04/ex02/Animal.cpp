/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/10/23 13:37:32 by jlarue           ###   ########.fr       */
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

Animal::Animal(const Animal &copie)
{
	if ((this->type == "Cat" || this->type == "Dog") && (copie.type == "Cat" || copie.type == "Dog"))
		*get_brain() = *copie.get_brain();
	this->type = copie.type;
	this->sound = copie.sound;
	std::cout << "Constructeur de copie Animal called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if ((this->type == "Cat" || this->type == "Dog") && (rhs.type == "Cat" || rhs.type == "Dog"))
		*get_brain() = *rhs.get_brain();
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->sound = rhs.sound;
	}
	return (*this);
}

void Animal::makeSound() const
{
	if (this->getType() == "Cat" || this->getType() == "Dog" || this->getType() == "WrongCat" || this->getType() == "WrongAnimal")
		this->makeSound();
	else
		std::cout << "Animal Default Sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Brain	*Animal::get_brain(void) const
{
	return (NULL);
}
