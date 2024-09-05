/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/20 11:38:56 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* src2 = new MateriaSource();
	src->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmpA1;
	AMateria* tmpA2;

	tmp = src->createMateria("ice");
	tmp2 = src2->createMateria("cure");
	tmpA1 = tmp;
	tmpA2 = tmp2;
	me->equip(tmp);
	bob->equip(tmp2);
	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);
	bob->use(1, *me);

	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	delete tmpA1;
	delete tmpA2;
	delete bob;
	delete me;
	delete src;
	delete src2;
	return 0;
}
