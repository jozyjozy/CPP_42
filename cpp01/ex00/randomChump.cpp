/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:47:11 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/02 14:54:03 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// nvx Zombie et le retourne
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}
