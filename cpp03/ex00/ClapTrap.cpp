/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:02 by jozy              #+#    #+#             */
/*   Updated: 2023/10/10 13:53:52 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hp(10), _attck(0), _energy(10)
{
    std::cout << GREEN <<"A ClapTrap named " << this->_name << " has been created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _attck(0), _energy(10)
{
    std::cout << GREEN <<"A ClapTrap named " << name << " has been created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int attck, int energy) : _name(name), _hp(hp), _attck(attck), _energy(energy)
{
    std::cout << GREEN <<"A personalized ClapTrap named " << name << " has been created !" << std::endl;
    std::cout << GREEN <<"its stats are : HP = " << hp << ", attack=" << attck << ", energy " << energy << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << ROUGE <<"A ClapTrap named " << this->_name << " has been destructed !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
   *this = rhs;
    std::cout << PURPLE <<"A ClapTrap named " << this->_name << " has been copied, must be Viego damnit jg diff" << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
   this->_name = rhs._name;
   this->_hp = rhs._hp;
   this->_attck = rhs._attck;
   this->_energy = rhs._energy;
   return (*this);
}

void ClapTrap::attack(std::string const& cible)
{
   if (this->_energy > 0)
   {
      std::cout << YELLOW <<"A ClapTrap named " << this->_name << " attacked " << cible << " causing " << this->_attck << " points of damage(s) !" << std::endl;
      this->_energy--;
   }
   else
      std::cout << ROUGE <<"A ClapTrap named " << this->_name << " is out of energy and cannot attack !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
   if ((unsigned int)this->_hp <= amount)
   {
      std::cout << PURPLE <<"A ClapTrap named " << this->_name << " died !" << std::endl;
   }
   else
   {
      this->_hp -= amount;
      std::cout << ROUGE <<"A ClapTrap named " << this->_name << " took " << amount << " damage letting him at " << this->_hp << " HP !" << std::endl;
   }
}

void ClapTrap::beRepaired(unsigned int amount)
{
   if (this->_energy < 1)
   {
      std::cout << ROUGE <<"A ClapTrap named " << this->_name << " is out of energy and cannot repair !" << std::endl;
   }
   else
   {
      this->_hp += amount;
      this->_energy -= 1;
      std::cout << GREEN <<"A ClapTrap named " << this->_name << " has been repaired for " << amount << "HP, it has now " << this->_hp << "HP left !" << std::endl;
   }
}
