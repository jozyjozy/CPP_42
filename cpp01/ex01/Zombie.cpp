/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:44:54 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:46:16 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constru
Zombie::Zombie(std::string name) : name(name) {}
// constru sans nom on en a besoin pour creer la horde
Zombie::Zombie(void) {}

// destru + msg de debug fun
Zombie::~Zombie() {
std::cout << name << " est mort car il n'avait pas assez de cervelles a disposition. RIP" << std::endl;
}

// va chercher et return le nom
std::string Zombie::getName() const
{
    return name;
}

// set le nom avec msg fun
void Zombie::setName(std::string newName)
{
	name = newName;
}

// ecrit dans std le nom du zomzom
void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// nvx Zombie et le retourne
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

// nvx Zombie et le retourne en ptr
Zombie* newZombie(std::string name)
{
    return (new Zombie(name));
}
