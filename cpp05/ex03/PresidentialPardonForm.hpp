#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class	PresidentialPardonForm: public AForm
{
	private:
		const std::string _target;
    public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& src);

		PresidentialPardonForm &operator=(const PresidentialPardonForm& src);

		std::string getTarget(void)const;
		void execute(Bureaucrat const& executor)const;
};
		std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);
#endif
