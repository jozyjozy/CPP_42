/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:08:01 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 12:04:10 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
   std::cout << "Base WrongCat constructor called" << std::endl;
   this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
   std::cout << "Base WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copie) : WrongAnimal(copie)
{
   this->type = copie.type;
   std::cout << "Constructeur de copie WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
   this->type = rhs.type;
   return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "MiAoUMiaOu (WrongCat)" << std::endl;
}

std::string WrongCat::getType(void) const
{
   return (this->type);
}
