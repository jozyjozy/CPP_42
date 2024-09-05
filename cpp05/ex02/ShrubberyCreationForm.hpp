#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include <fstream>
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class	ShrubberyCreationForm: public AForm
{
	private:
		const std::string _target;
    public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& src);

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& src);

		std::string getTarget(void)const;
		void execute(Bureaucrat const& executor)const;
};
		std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a);
#endif
