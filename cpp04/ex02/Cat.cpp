/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:00:15 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:37:36 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Base Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->Animal::type = "Cat";
	this->Animal::sound = "Meow";
}

Cat::~Cat()
{
	delete this->brain;
   std::cout << "Base Cat destructor called" << std::endl;
}

Cat::Cat(Cat &copie) : Animal(copie)
{
	this->brain = new Brain();
	*this = copie;
	std::cout << "Constructeur de copie Cat called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout <<  "Use of cat = overloaded operator" << std::endl;
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

Brain *Cat::get_brain() const
{
	return (this->brain);
}

void Cat::makeSound() const
{
   std::cout << "MIAOU-MIAOU" << std::endl;
}


