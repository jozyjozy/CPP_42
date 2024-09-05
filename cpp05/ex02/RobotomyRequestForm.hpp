#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class	RobotomyRequestForm: public AForm
{
	private:
		const std::string _target;
    public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& src);

		RobotomyRequestForm &operator=(const RobotomyRequestForm& src);

		std::string getTarget(void)const;
		void execute(Bureaucrat const& executor)const;
};
		std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a);
#endif
