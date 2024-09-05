/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:07:56 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:54:52 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	WrongCat: public WrongAnimal
{
	protected:
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat & copie);

        WrongCat &operator=(WrongCat const &rhs);
        std::string getType(void) const;
        void makeSound() const;
};
#endif
