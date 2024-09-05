/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:05 by jozy              #+#    #+#             */
/*   Updated: 2023/09/01 11:50:40 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
        int                 _entier;
        static const int    _fraction_Bits = 8;
    public:
		Fixed(void);
		Fixed(const Fixed &rhs);
        Fixed& operator=(const Fixed &rhs);
		~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif