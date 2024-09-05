/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:00:15 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:37:43 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
   std::cout << "Base Dog constructor called" << std::endl;
   this->brain = new Brain();
   this->Animal::type = "Dog";
   this->Animal::sound = "Woof";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Base Dog destructor called" << std::endl;
}

Dog::Dog(Dog &copie) : Animal(copie)
{
	this->brain = new Brain();
	*this = copie;
	std::cout << "Constructeur de copie Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout <<  "Use of dog = overloaded operator" << std::endl;
	if (this == &rhs)
		return *this;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		this->brain->ideas[i] = rhs.brain->ideas[i];
		i++;
	}
	return *this;
}

Brain *Dog::get_brain() const
{
	return (this->brain);
}

void Dog::makeSound() const
{
   std::cout << "Waff-Waff" << std::endl;
}
