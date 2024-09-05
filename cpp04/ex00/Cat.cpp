/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:00:15 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:31:56 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
   std::cout << "Base Cat constructor called" << std::endl;
   this->Animal::type = "Cat";
   this->Animal::sound = "Meow";
}

Cat::~Cat()
{
   std::cout << "Base Cat destructor called" << std::endl;
}

Cat::Cat(Cat &copie) : Animal(copie)
{
   this->type = copie.getType();
   std::cout << "Constructeur de copie Cat called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
   this->type = rhs.type;
   return (*this);
}

void Cat::makeSound() const
{
   std::cout << "MIAOU-MIAOU" << std::endl;
}
