/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/10/09 14:08:30 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor  to 0
Fixed::Fixed() : _entier(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//int constructor
Fixed::Fixed(const int n) : _entier(n << _fraction_Bits)
{
    std::cout << "Int constructor called" << std::endl;
}

//float constructor
Fixed::Fixed(const float n) : _entier(roundf(n * (1 << _fraction_Bits)))
{
    std::cout << "Float constructor called" << std::endl;
}


//constructeur de copie
Fixed::Fixed(const Fixed &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

//constructeur avec surcarhe de l'operateur d'affectation
Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_entier = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
//    std::cout << "getRawBits member function called" << std::endl;
    return (this->_entier);
}

void Fixed::setRawBits(int const raw)
{
    this->_entier = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->getRawBits()) / (1 << _fraction_Bits));
}

int Fixed::toInt(void) const
{
    return (this->_entier >> _fraction_Bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return o;
}
