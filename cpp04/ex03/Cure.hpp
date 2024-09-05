/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:29:59 by jozy              #+#    #+#             */
/*   Updated: 2023/09/13 18:47:36 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Cure : public AMateria
{
	private: 
        std::string _type;
        
    public:
        Cure();
        Cure(Cure const & copie);
        ~Cure();
        Cure &operator=(Cure const & ref);
        std::string const & getType() const;
        Cure *clone() const;
        void use(ICharacter& target);
       
};
#endif