/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 10:56:19 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
    std::cout << "booting of toplane in progress" << std::endl;
    ScavTrap    Malphite("Malphite le golem originel");
	ScavTrap	Viego(Malphite);
    Malphite.attack("Sett");
    Malphite.takeDamage(42);
    Malphite.guardGate();
}
