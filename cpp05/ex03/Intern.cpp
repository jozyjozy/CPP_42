/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:30:00 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 15:20:22 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern& src )
{
	*this = src;
}

Intern::~Intern()
{
}

Intern& Intern::operator=( const Intern& src )
{
	if (this == &src)
		return *this;
	return *this;
}

static	AForm	*createPresidentForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static	AForm	*createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static	AForm	*createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeForm(const std::string formName, const std::string target)
{
	int i;

	AForm *(*functionsTab[])(const std::string target) = {&createPresidentForm, &createRobotomyForm, &createShrubberyForm};
	std::string requestNames[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};

	i = 0;
	while (i < 3)
	{
		if (formName == requestNames[i])
			return (functionsTab[i](target));
		i++;
	}
	std::cout << "your formName is not in the accepted list" << std::endl;
	return (NULL);
}
