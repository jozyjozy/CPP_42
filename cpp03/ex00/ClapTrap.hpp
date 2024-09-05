/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:11:05 by jozy              #+#    #+#             */
/*   Updated: 2023/10/16 10:48:32 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	ClapTrap
{
	private:
        std::string _name;
        int         _hp;
        int         _attck;
        int         _energy;

    public:
        ClapTrap(void);
        ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rhs);
        ClapTrap(std::string name, int hp, int attck, int energy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap& rhs);

        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};
#endif
