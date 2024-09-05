/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:44:54 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/02 14:58:01 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constru
Zombie::Zombie(std::string name) : name(name) {}

// destru + msg de debug fun
Zombie::~Zombie() {
std::cout << name << " est mort car il n'avait pas assez de cervelles a disposition. RIP" << std::endl;
}

// va chercher et return le nom
std::string Zombie::getName() const {
    return name;
}

// set le nom avec msg fun
void Zombie::setName(std::string newName) {
	std::cout << name << " change de prenom suite a une crise identitaire." << std::endl;
	std::cout << "Il se prenomme dorenavant " << newName << "." << std::endl;
	name = newName;
}

// ecrit dans std le nom du zomzom
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
