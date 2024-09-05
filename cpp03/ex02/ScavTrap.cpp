/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:03:21 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 11:12:34 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
    std::cout << GREEN <<"A ScavTrap named " << this->_name << " has been created !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN <<"A ScavTrap named " << name << " has been created !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << ROUGE <<"A ScavTrap named " << this->_name << " has been destructed !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
   *this = rhs;
    std::cout << PURPLE <<"A ScavTrap named " << this->_name << " has been copied, must be Viego damnit jg diff" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
   this->_name = rhs._name;
   this->_hp = rhs._hp;
   this->_attck = rhs._attck;
   this->_energy = rhs._energy;
   return (*this);
}

void ScavTrap::attack(std::string const& cible)
{
   if (this->_energy > 0)
   {
      std::cout << YELLOW <<"A ScavTrap named " << this->_name << " attacked " << cible << " causing " << this->_attck << " points of damage(s) !" << std::endl;
      this->_energy--;
   }
   else
      std::cout << ROUGE <<"A ScavTrap named " << this->_name << " is out of energy and cannot attack !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
   if ((unsigned int)this->_hp <= amount)
   {
      std::cout << PURPLE <<"A ScavTrap named " << this->_name << " died !" << std::endl;
   }
   else
   {
      this->_hp -= amount;
      std::cout << ROUGE <<"A ScavTrap named " << this->_name << " took " << amount << " damage letting him at " << this->_hp << " HP !" << std::endl;
   }
}

void ScavTrap::beRepaired(unsigned int amount)
{
   if (this->_energy < 1)
   {
      std::cout << ROUGE <<"A ScavTrap named " << this->_name << " is out of energy and cannot repair !" << std::endl;
   }
   else
   {
      this->_hp += amount;
      this->_energy -= 1;
      std::cout << GREEN <<"A ScavTrap named " << this->_name << " has been repaired for " << amount << "HP, it has now " << this->_hp << "HP left !" << std::endl;
   }
}

void ScavTrap::guardGate()
{
    std::cout << PURPLE <<"A ScavTrap named " << this->_name << " is now keeping the gate !" << std::endl;
}
