/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:59:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 14:24:03 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	/* generation seed aleatoire pour la robotomy */
	srand(time(NULL));
	std::cout << GREEN <<"------------------------\n|    WORKING CASES:    |\n------------------------" << WHITE << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 1 : PresidentialPardonForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 4);
		PresidentialPardonForm form("Lalo");
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 2 : RobotomyRequestForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 4);
		RobotomyRequestForm form("Lalo");
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 3 : ShrubberyCreationForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 20);
		ShrubberyCreationForm form("Lalo");
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	std::cout << "\n" << std::endl;
	std::cout << ROUGE << "------------------------\n|  NOT WORKING CASES:  |\n------------------------" << WHITE << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 1 : PresidentialPardonForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 25);
		PresidentialPardonForm form("Lalo");
		bureaucrat.signForm(form);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 2 : PresidentialPardonForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 26);
		PresidentialPardonForm form("Lalo");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 3 : RobotomyRequestForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 46);
		RobotomyRequestForm form("Lalo");
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		form.execute(bureaucrat);
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 4 : RobotomyRequestForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 76);
		RobotomyRequestForm form("Lalo");
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 4 : ShrubberyCreationForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 138);
		ShrubberyCreationForm form("Lalo");
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}

	std::cout << "\n" << std::endl;
	std::cout << PURPLE <<"case 5 : ShrubberyCreationForm" << WHITE  << "\n" << std::endl;
	{
		Bureaucrat bureaucrat("BoBBy", 146);
		ShrubberyCreationForm form("Lalo");
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
	}

	std::cout << "\n" << std::endl;
	std::cout << ROUGE << "----------------------------\n|TEST EXEC FROM BUREAUCRAT:|\n----------------------------" << WHITE << std::endl;
	std::cout << "\n" << std::endl;

    Bureaucrat Max("Max", 1);
    Bureaucrat Leon("Leon", 150);
    ShrubberyCreationForm Lux("Bobby");
    PresidentialPardonForm Forgive("Camille");
    RobotomyRequestForm     Rob("Bob");
    Max.executeForm(Lux);
    Leon.executeForm(Lux);
    Max.executeForm(Forgive);
    Max.executeForm(Rob);
    Max.signForm(Lux);
    Max.signForm(Rob);
    Max.signForm(Forgive);
    Max.executeForm(Lux);
    Leon.executeForm(Lux);
    Max.executeForm(Forgive);
    Max.executeForm(Rob);
    Max.executeForm(Rob);

}
