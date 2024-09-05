/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:35:17 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:40:23 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// constru avec type
Weapon::Weapon(std::string type)
{
	this->setType(type);
}

// destru de l'arme
Weapon::~Weapon() {}

// set le type de l'arme
void	Weapon::setType(std::string nType)
{
	this->type = nType;
}

// va chercher le type de l'arme
const	std::string& Weapon::getType( void )
{
	return this->type;
}
