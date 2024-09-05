/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:33:38 by jozy              #+#    #+#             */
/*   Updated: 2023/09/14 13:32:49 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : _type("cure")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

Cure::Cure(Cure const & copie) : AMateria(copie), _type(copie.getType())
{
    std::cout << this->_type << " hase been copied" << std::endl;
}

Cure & Cure::operator=(Cure const & ref)
{
    std::cout << "Assigned from " << ref.getType() << std::endl;
    return (*this);
}

std::string const & Cure::getType(void) const
{
    return (this->_type);
}

Cure *Cure::clone() const
{
    Cure *copie = new Cure;
    return (copie);
}

void Cure::use(ICharacter& target)
{
    std::cout << " heals " << target.getName() << "\'s wounds" << std::endl;
}