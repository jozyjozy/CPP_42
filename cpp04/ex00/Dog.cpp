/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:00:15 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:32:57 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
   std::cout << "Base Dog constructor called" << std::endl;
   this->Animal::type = "Dog";
   this->Animal::sound = "Woof";
}

Dog::~Dog()
{
   std::cout << "Base Dog destructor called" << std::endl;
}

Dog::Dog(Dog &copie) : Animal(copie)
{
   this->type = copie.type;
   std::cout << "Constructeur de copie Dog called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
   this->type = rhs.type;
   return (*this);
}

void Dog::makeSound() const
{
   std::cout << "Waff-Waff" << std::endl;
}
