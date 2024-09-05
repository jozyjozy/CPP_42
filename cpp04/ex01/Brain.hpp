/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:46:20 by jozy              #+#    #+#             */
/*   Updated: 2023/10/17 12:14:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	Brain
{
	private:
    public:
        std::string *ideas;
        Brain();
        ~Brain();
        Brain(Brain & copie);

        Brain &operator=(Brain const &rhs);
        std::string *getIdeas();
};
#endif
