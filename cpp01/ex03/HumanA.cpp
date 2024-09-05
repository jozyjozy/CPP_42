/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:35:25 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:40:56 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// constru avec arme car Human A a tjrs une arme
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

// destru
HumanA::~HumanA() {}

// attack
void	HumanA::attack(void) const {
	if (this->_weapon.getType() == "")
	{
		std::cout << _name << " has no weapon to attack" << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	}
}
