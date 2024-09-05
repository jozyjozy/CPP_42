/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/09/14 13:35:11 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
   std::cout << "Base AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
   std::cout << "Base AMateria with a type created" << std::endl;  
}

AMateria::~AMateria()
{
   std::cout << "destructor AMateria called" << std::endl;
}


AMateria::AMateria(AMateria const & copie) : _type(copie._type)
{
   std::cout << "Constructeur de copie AMateria called" << std::endl;
}

std::string const & AMateria::getType(void) const 
{
   return (this->_type);
}

void AMateria::use(ICharacter& target)
{
   std::cout << " Amateria aabstractly used on " << target.getName() << std::endl;
}