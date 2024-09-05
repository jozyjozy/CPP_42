/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:08:17 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 12:47:06 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
        std::string _name2;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other_attr);
        ~DiamondTrap();
        void attack(std::string const& target);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
        void whoAmI();
        DiamondTrap& operator=(const DiamondTrap& rhs);
};


#endif
