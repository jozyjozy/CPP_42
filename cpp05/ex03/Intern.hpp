#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class	Intern
{
	private:

    public:
		Intern();
		Intern(const Intern& src);
		~Intern();

		Intern &operator=(const Intern &src);

		AForm	*makeForm(std::string formName, std::string target);

};
#endif
