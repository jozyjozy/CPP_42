/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:13:31 by jozy              #+#    #+#             */
/*   Updated: 2023/10/20 11:39:11 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    std::cout << "A character named " << this->_name << " has been created" << std::endl;
    this->_inventory[0] = 0;
    this->_inventory[1] = 0;
    this->_inventory[2] = 0;
    this->_inventory[3] = 0;
}

Character::~Character()
{
    if (this->_inventory[0])
        delete this->_inventory[0];
    if (this->_inventory[1])
        delete this->_inventory[1];
    if (this->_inventory[2])
        delete this->_inventory[2];
    if (this->_inventory[3])
        delete this->_inventory[3];
    std::cout << "A character named " << this->_name << " has been destroyed" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

Character::Character(Character const & copie) : _name(copie.getName() + "_copie")
{
    if (this->_inventory[0])
        delete this->_inventory[0];
    if (this->_inventory[1])
        delete this->_inventory[1];
    if (this->_inventory[2])
        delete this->_inventory[2];
    if (this->_inventory[3])
        delete this->_inventory[3];
    if (copie._inventory[0])
        this->_inventory[0] = copie._inventory[0]->clone();
    if (copie._inventory[1])
        this->_inventory[1] = copie._inventory[1]->clone();
    if (copie._inventory[2])
        this->_inventory[2] = copie._inventory[2]->clone();
    if (copie._inventory[3])
        this->_inventory[3] = copie._inventory[3]->clone();
    std::cout << "A character named " << this->_name << " has been copied from " << copie._name << std::endl;
}

Character & Character::operator=(Character const & ref)
{
	// Impossible to change name because it's constant
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	return (*this);
}

void Character::equip(AMateria *loot)
{
    if (!loot)
    {
        std::cout << "Noithing to equip sir !" << std::endl;
        return ;
    }
	int i = 0;
    while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 Materia";
		return ;
	}
    this->_inventory[i] = loot;
    std::cout << this->_name << " has equiped " << loot->getType() << " in the slot of index " << i << std::endl;
}

void Character::unequip(int idx)
{
	AMateria *ptr = (this->_inventory)[idx];
	if (idx < 0 || idx >= 4)
		std::cout << this->_name << " tried to unequip nothing at slot " << idx << " and it did nothing\n";
	else if (!(this->_inventory)[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << " so he can't unequip it\n";
	else
	{
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		(this->_inventory)[idx] = 0;
	}
}

void Character::use(int index, ICharacter& target)
{
    std::string name = this->getName();

    if (index < 0 || index >= 4 || this->_inventory[index] == 0)
    {
        std::cout << "nothing to use at this index" << std::endl;
        return ;
    }
    std::cout << name;
    (this->_inventory[index])->use(target);
}

