/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:18:41 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:39:01 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string	_name;
    Weapon*		_weapon;
    HumanB();

public:
	//constru sans arme
	HumanB(std::string name);

	//destru
    ~HumanB();

	//set weapon
    void    setWeapon(Weapon& weapon);

	//attack
    void	attack(void) const;
};

#endif
