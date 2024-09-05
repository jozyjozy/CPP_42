/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:35:22 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:40:41 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constru sans arme car le B a pas forcement d'arme
HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

//destru
HumanB::~HumanB() {}

//set l'arme de HumanB
void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

//attack
void	HumanB::attack(void) const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}
