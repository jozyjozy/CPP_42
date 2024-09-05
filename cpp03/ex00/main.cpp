/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/10 13:55:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
    std::cout << "booting of toplane in progress" << std::endl;
    ClapTrap    Sett("Sett");
	ClapTrap	Yuumi;
    ClapTrap    ChoGath("Cho", 100, 100, 500);

	Yuumi.attack("Sett");
    Sett.attack("Cho'Gath");
    ChoGath.takeDamage(0);
    ChoGath.beRepaired(4500);
    ChoGath.attack("Sett");
    Sett.takeDamage(100);
    Sett.beRepaired(400);
    ClapTrap    Viego(ChoGath);
}
