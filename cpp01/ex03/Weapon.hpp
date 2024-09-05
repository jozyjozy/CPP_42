/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:48:24 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:38:43 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
	//constru
    Weapon(std::string type);

	//destru
	~Weapon();

	//set the type of the weapon
    void	setType(std::string nType);

	//return the type of the weapon
    const std::string&	getType(void);
};

#endif
