/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:33:18 by jlarue            #+#    #+#             */
/*   Updated: 2023/09/29 11:24:12 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie	*zombie2;

	//crea de Gilgamesh avec un constructeur de base
	Zombie	zombie1("Gilgamesh");
    zombie1.announce();
    zombie1.setName("Moriarty");
    zombie1.announce();

	//crea de Morgoth en utilisant le constructeur de base dans randomChump
	randomChump("Morgoth");

	//crea d'Alexa en ptr grace a la fction newZombie
	zombie2 = newZombie("Alexa");
	zombie2->announce();
	zombie2->~Zombie();
	delete zombie2;
    return 0;
}
