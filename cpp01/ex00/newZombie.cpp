/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:41:02 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/02 14:53:43 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// nvx Zombie et le retourne en ptr
Zombie* newZombie(std::string name) {
    return (new Zombie(name));
}

