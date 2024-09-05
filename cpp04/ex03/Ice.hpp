/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:02 by jozy              #+#    #+#             */
/*   Updated: 2023/09/13 19:26:10 by jozy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Ice : public AMateria
{
	private: 
        std::string _type;
    public:
        Ice();
        Ice(Ice const & copie);
        ~Ice();
        Ice &operator=(Ice const & ref);
        std::string const & getType() const;
        Ice *clone() const;
        void use(ICharacter& target);
       
};
#endif