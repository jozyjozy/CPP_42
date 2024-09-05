/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:05 by jozy              #+#    #+#             */
/*   Updated: 2023/10/23 13:52:21 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

/*
Afin d’éviter les erreurs potentielles, la classe Animal de base ne doit pas être instanciable.
(1) ==> Pour ce faire on a mis en protected le constructeur de base de Animal ce qui ne le rend accessible que pour les classes derivees de Animal
Faire un new Animal() dans notre code causerait une erreur de compilation.
(2) ==> Pour rendre la classe abstraite on a ajouter un = 0 sur la fin de makeSound(), ce qui rend la fonction virtuellement pure et ce faisant la classe animale devient abstraite comme demande l'exo
*/

class	Animal
{
	protected:
        std::string type;
		std::string sound;
        Animal();
    public:
        virtual ~Animal();
        Animal(const Animal & copie);
		virtual Brain *get_brain(void) const;
        Animal &operator=(Animal const &rhs);
        virtual std::string getType(void) const;
        virtual void makeSound() const = 0;
};
#endif
