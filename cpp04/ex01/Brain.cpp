/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:50:41 by jozy              #+#    #+#             */
/*   Updated: 2023/10/17 13:03:44 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "idea";
        i++;
    }
	std::cout << "A brain has been created" << std::endl;
}


Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "A brain has been deleted" << std::endl;
}

Brain::Brain(Brain & copie)
{
    std::string *ideaCopied = copie.getIdeas();
    this->ideas = new std::string[100];
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = ideaCopied[i] + "_copied";
        i++;
    }
	std::cout << "A brain has been copied" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Use of =() in for brain ideas" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = rhs.ideas[i];
        i++;
    }
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}
