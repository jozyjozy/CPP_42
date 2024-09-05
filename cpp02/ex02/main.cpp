/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/12 13:01:36 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}

/*check des autres operateurs a mettre dans le main si besoin:
Fixed c(1.4562f);
Fixed d(42);
std::cout << c + 12 << std::endl;
std::cout << d - 5 << std::endl;
std::cout << d * 2 << std::endl;
std::cout << d / 2 << std::endl;
std::cout << Fixed::min(c, d) << std::endl;
std::cout << ((Fixed::min(c, d) + Fixed::max(c, d)) * 2 + 10 - 7 )/ 5 << std::endl;
Fixed c(2);
Fixed d(1.2);
std::cout << c + 12 << std::endl;
std::cout << d - 5 << std::endl;
std::cout << d * 2 << std::endl;
std::cout << d / 2 << std::endl;
std::cout << Fixed::min(c, d) << std::endl;
std::cout << ((Fixed::min(c, d) + Fixed::max(c, d)) * 2 + 10 - 7 )/ 5 << std::endl;
*/
