/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:33:38 by jozy              #+#    #+#             */
/*   Updated: 2023/09/14 13:32:29 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : _type("ice")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

Ice::Ice(Ice const & copie) : AMateria(copie), _type(copie.getType())
{
    std::cout << this->_type << " hase been copied" << std::endl;
}

Ice & Ice::operator=(Ice const & ref)
{
    std::cout << "Assigned from " << ref.getType() << std::endl;
    return (*this);
}

std::string const & Ice::getType(void) const
{
    return (this->_type);
}

Ice *Ice::clone() const
{
    Ice *copie = new Ice;
    return (copie);
}

void Ice::use(ICharacter& target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}