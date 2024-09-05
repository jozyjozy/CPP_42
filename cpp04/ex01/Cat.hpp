/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:57:45 by jozy              #+#    #+#             */
/*   Updated: 2023/10/19 11:38:00 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

class	Cat: public Animal
{
	private:
        Brain*	brain;
    public:
		Cat();
		~Cat();
		Cat(Cat & copie);
		Brain *get_brain(void) const;
		Cat &operator=(Cat const &rhs);
		void makeSound() const;
};
#endif
