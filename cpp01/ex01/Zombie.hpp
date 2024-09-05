/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:29:16 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/02 16:01:24 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    // Constructeur avec un nom
    Zombie(std::string name);

	// Constructeur sans nom pour la horde
	Zombie(void);

	// Destructeur
	~Zombie(void);

    // Méthode pour obtenir le nom du Zombie
    std::string getName() const;

    // Méthode pour définir le nom du Zombie
    void setName(std::string newName);

    // Méthode pour annoncer le Zombie
    void announce() const;

};

// Fonction pour créer un nouveau Zombie et le retourner
Zombie* newZombie(std::string name);

// Fonction pour créer un Zombie et l'annoncer
void randomChump(std::string name);

// Creation  d'une horde de Zombies
Zombie* zombieHorde( int N, std::string name );

#endif
