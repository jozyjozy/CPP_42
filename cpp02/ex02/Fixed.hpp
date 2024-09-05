/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:05 by jozy              #+#    #+#             */
/*   Updated: 2023/09/04 14:56:29 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
        int                 _entier;
        static const int    _fraction_Bits = 8;
    public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &rhs);
        Fixed& operator=(const Fixed &rhs);
		~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int   toInt(void) const;
    
    //checker (renvoie true or false depending on the veracity of what is checked)
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator>(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
    
    //operators add substracting multiplying dividing
        Fixed operator+(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
    
    //iterators
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator++(void);
        Fixed& operator--(void);
    
    //min and max
        static Fixed& min(Fixed &x, Fixed &y);
        static Fixed& max(Fixed &x, Fixed &y);
        static const Fixed& min(const Fixed &x, const Fixed &y);
        static const Fixed& max(const Fixed &x, const Fixed &y);
};
        std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif