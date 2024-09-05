/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:59:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 15:20:45 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
		/* generation seed aleatoire pour la robotomy */
		srand(time(NULL));
		Intern *bamby = new Intern();
   		Bureaucrat Max("Max", 1);
   		Bureaucrat Leo("Leonardo", 149);
		std::cout << "\n" << GREEN << "bamby has a lot of work to do, he must create 4 form but one is SUSSY" << WHITE <<std::endl;
		AForm *b = bamby->makeForm("Shrubbery Creation", "Rochelle");
		AForm *c = bamby->makeForm("Presidential Pardon", "Johannes");
		AForm *d = bamby->makeForm("Robotomy Request", "Agiguair");
		std::cout << "\n" << PURPLE << "the following formName does not exist in the intern list, he cannot do it. It does not mean you cannot blame him for your bad work !" << WHITE <<std::endl;
		AForm *e = bamby->makeForm("DOES NOT EXIST", "Diane");
		delete e;
		std::cout << "\n" << GREEN << "Max sign then exec the shrubbery form for Rochelle that has been created by bamby" << WHITE <<std::endl;
		Max.signForm(*b);
		Max.executeForm(*b);
		std::cout << "\n" << ROUGE << "Leonardo cannot sign the presidential pardon form for Johannes that has been created by bamby" << WHITE <<std::endl;
		Leo.signForm(*c);
		std::cout << "\n" << ROUGE << "Max cannot exec the presidential pardon form for Johannes that has been created by bamby because Leo hasn't signed it" << WHITE <<std::endl;
		Max.executeForm(*c);
		std::cout << "\n" << GREEN << "Max sign presidential pardon form for Johannes that has been created by bamby" << WHITE <<std::endl;
		Max.signForm(*c);
		std::cout << "\n" << ROUGE << "Leo cannot exec the presidential pardon form for Johannes that has been created by bamby" << WHITE <<std::endl;
		Leo.executeForm(*c);
		std::cout << "\n" << GREEN << "the presidential pardon form is being exec by Max the goat" << WHITE <<std::endl;
		c->execute(Max);
		std::cout << "\n" << GREEN << "Max sign the Robotomy request created by bamby" << WHITE <<std::endl;
		Max.signForm(*d);
		std::cout << "\n" << ROUGE << "Leo cannot sign the Robotomy request created by bamby" << WHITE <<std::endl;
		d->execute(Leo);
		std::cout << "\n" << GREEN << "Max exec the Robotomy request created by bamby" << WHITE <<std::endl;
		Max.executeForm(*d);

		std::cout << "\n" << YELLOW << "We destroy everything, as we used new to create the objects we need to manually delete them to avoid leaks" << WHITE << std::endl;
		delete b;
		delete c;
		delete d;
		delete bamby;
}
