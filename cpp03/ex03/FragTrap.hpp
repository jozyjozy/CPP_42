/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:28:46 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 12:17:20 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	FragTrap : public ClapTrap
{
	protected:
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
		FragTrap(const FragTrap &rhs);
        FragTrap &operator=(const FragTrap& rhs);
        void attack(std::string const& target);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
        void highFive();
};

#endif
