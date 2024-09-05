/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:54:19 by jozy              #+#    #+#             */
/*   Updated: 2023/09/14 13:35:49 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Materia Source has ben created" << std::endl;
    this->_inventory[0] = 0;
    this->_inventory[1] = 0;
    this->_inventory[2] = 0;
    this->_inventory[3] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copie)
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
    std::cout << "A MateriaSource has been copied" << std::endl;
}

MateriaSource::~MateriaSource()
{
    if (this->_inventory[0])
        delete this->_inventory[0];
    if (this->_inventory[1])
        delete this->_inventory[1];
    if (this->_inventory[2])
        delete this->_inventory[2];
    if (this->_inventory[3])
        delete this->_inventory[3];
    std::cout << "A Materia Source has been destroyed" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & copie)
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
    return (*this);
}

void MateriaSource::learnMateria(AMateria *loot)
{
    int i = 0;
    
    while ((this->_inventory)[i] != 0 && i != 4)
        i++;
    if (i == 4)
    {
        std::cout << "cannot learn more than 4 Materia" << std::endl;
        return ;
    }
    (this->_inventory)[i] = loot;
    std::cout << "Materia " << loot->getType() << " learnt" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    
    while ((this->_inventory)[i] != 0 && ((this->_inventory)[i])->getType() != type && i != 4)
        i++;
    if (i == 4 || (this->_inventory)[i] == 0)
    {
        std::cout << type << " does not exist" << std::endl;
        return (NULL);
    }
    std::cout << "Materia " << type << " has been created" << std::endl;
    return ((((this->_inventory)[i])->clone()));
}
