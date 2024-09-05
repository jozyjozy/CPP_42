/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:13:12 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 12:49:11 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->_name2 = "Default";
    std::cout << GREEN <<"A DiamondTrap named " << this->_name2 << " has been created !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->_name2 = name;
    std::cout << GREEN <<"A DiamondTrap named " << this->_name2 << " has been created !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << ROUGE <<"A DiamondTrap named " << this->_name2 << " has been destructed !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ScavTrap(), FragTrap()
{
   *this = rhs;
    std::cout << PURPLE <<"A DiamondTrap named " << this->_name2 << " has been copied, must be Viego damnit jg diff" << std::endl;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->_name2 = rhs._name2;
	this->FragTrap::_name = rhs.FragTrap::_name;
	this->FragTrap::_hp = rhs.FragTrap::_hp;
	this->FragTrap::_attck = rhs.FragTrap::_attck;
	this->FragTrap::_energy = rhs.FragTrap::_energy;
	return (*this);
}

void DiamondTrap::attack(std::string const& cible)
{
    this->ScavTrap::attack(cible);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
   if ((unsigned int)this->FragTrap::_hp <= amount)
   {
      std::cout << PURPLE <<"A DiamondTrap named " << this->_name2 << " died !" << std::endl;
   }
   else
   {
      this->FragTrap::_hp -= amount;
      std::cout << ROUGE <<"A DiamondTrap named " << this->_name2 << " took " << amount << " damage letting him at " << this->FragTrap::_hp << " HP !" << std::endl;
   }
}

void DiamondTrap::beRepaired(unsigned int amount)
{
   if (this->FragTrap::_energy < 1)
   {
      std::cout << ROUGE <<"A DiamondTrap named " << this->_name2 << " is out of energy and cannot repair !" << std::endl;
   }
   else
   {
      this->FragTrap::_hp += amount;
      this->FragTrap::_energy -= 1;
      std::cout << GREEN <<"A DiamondTrap named " << this->_name2 << " has been repaired for " << amount << "HP, it has now " << this->FragTrap::_hp << "HP left !" << std::endl;
   }
}

void DiamondTrap::whoAmI()
{
    std::cout << PURPLE <<"Who am I ? I am a DiamondTrap named " << this->_name2 << " and my ClapTrap name is " << this->FragTrap::_name << std::endl;
}
