/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:05 by jozy              #+#    #+#             */
/*   Updated: 2023/10/09 13:48:34 by jlarue           ###   ########.fr       */
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
};
        std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif
