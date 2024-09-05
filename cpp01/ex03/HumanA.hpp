/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:50:36 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:41:35 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon&		_weapon;
	HumanA();

public:

	//constru avec un nom et une weapon
	HumanA(std::string name, Weapon& weapon);

	//destru
    ~HumanA();

	//attack
	void	attack(void) const;
};

#endif
