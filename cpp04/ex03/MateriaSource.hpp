/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:50:12 by jozy              #+#    #+#             */
/*   Updated: 2023/09/14 13:21:39 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private: 
        AMateria *_inventory[4];
        
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & copie);
        ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & ref);
        void learnMateria(AMateria *loot);
        AMateria* createMateria(std::string const & type);
};
#endif