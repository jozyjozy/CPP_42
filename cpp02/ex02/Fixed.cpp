/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/10/12 13:03:24 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor  to 0
Fixed::Fixed() : _entier(0)
{
   // std::cout << "Default constructor called" << std::endl;
}

//int constructor
Fixed::Fixed(const int n) : _entier(n << _fraction_Bits)
{
   // std::cout << "Int constructor called" << std::endl;
}

//float constructor
Fixed::Fixed(const float n) : _entier(roundf(n * (1 << _fraction_Bits)))
{
    //std::cout << "Float constructor called" << std::endl;
}


//constructeur de copie
Fixed::Fixed(const Fixed &rhs)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

//constructeur avec surcarhe de l'operateur d'affectation
Fixed& Fixed::operator=(const Fixed &rhs)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_entier = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
 //   std::cout << "Destructor called" << std::endl;
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

//comparators
bool Fixed::operator==(const Fixed &rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(const Fixed &rhs) const
{
    return (this->getRawBits() != rhs.getRawBits());
}
bool Fixed::operator>=(const Fixed &rhs) const
{
    return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator>(const Fixed &rhs) const
{
    return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator<=(const Fixed &rhs) const
{
    return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator<(const Fixed &rhs) const
{
    return (this->getRawBits() < rhs.getRawBits());
}

//operators
Fixed   Fixed::operator+(const Fixed &rhs) const
{
    Fixed x;

    x = this->toFloat() + rhs.toFloat();
    return (x);
}
Fixed   Fixed::operator-(const Fixed &rhs) const
{
    Fixed x;

    x = this->toFloat() - rhs.toFloat();
    return (x);
}
Fixed   Fixed::operator*(const Fixed &rhs) const
{
    Fixed x;

    x = this->toFloat() * rhs.toFloat();
    return (x);
}
Fixed   Fixed::operator/(const Fixed &rhs) const
{
    Fixed x;

    x = this->toFloat() / rhs.toFloat();
    return (x);
}

/*incrementors first is postfix second are prefix
Explanation :

Postfix :
int X = 5;
int Y = X++;
==> On copie la valeur de l'objet puis on l'incrémente.

Prefix :
int X = 5;
X++;
==> on modifie directement la valeur qui dans l'autre cas (postfix) etait copier dans Y
En gros c'est la diff entre x++ et ++x
*/
Fixed Fixed::operator++(int)
{
    Fixed x(*this);

    x._entier = this->_entier++;
    return (x);
}

Fixed Fixed::operator--(int)
{
    Fixed x(*this);

    x._entier = this->_entier--;
    return (x);
}

Fixed& Fixed::operator++(void)
{
    ++this->_entier;
    return (*this);
}

Fixed& Fixed::operator--(void)
{
    --this->_entier;
    return (*this);
}

//min and max
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
