/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonRobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:30:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 10:30:13 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 75, 45), _target("DEFAULT")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 75, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& src ) : AForm("RobotomyRequestForm", 75, 45), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
	if ( this == &rhs )
		return *this;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int	i;

	i = rand();
	try
	{
		if (executor.getGrade() > 45)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else if (this->isSigned() == false)
		{
			std::cout << "Cannot exec form is not signed" << std::endl;
		}
		else if ((i % 2) == 1)
			std::cout << "BzZzzzZ zRzzZRiOUUUiKK BbBBBRbRBRRRrR " << this->getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << this->getTarget() << " robotomy has failed" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream& operator<<( std::ostream& o, const RobotomyRequestForm& rhs )
{
	o << rhs.getName() << ", RobotomyRequestForm grade to sign : " << rhs.getGradeS() << " || grade to exec : " << rhs.getGradeE() << "|| is signed : " << rhs.isSigned();
	return o;
}

