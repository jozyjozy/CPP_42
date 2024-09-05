/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 11:18:10 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
    std::cout << "booting of toplane in progress" << std::endl;
    FragTrap    Malphite("Malphite le golem originel");
	
    Malphite.attack("Sett");
    Malphite.takeDamage(100);
    Malphite.highFive();
}
