/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:57:07 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 11:05:24 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	ScavTrap : public ClapTrap
{
	private:
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
		ScavTrap(const ScavTrap &rhs);
        ScavTrap &operator=(const ScavTrap& rhs);
        void attack(std::string const& target);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
        void guardGate();
};

#endif
