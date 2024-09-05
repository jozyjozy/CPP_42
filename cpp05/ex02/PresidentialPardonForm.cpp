/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:30:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 10:30:13 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("DEFAULT")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& src ) : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
	if ( this == &rhs )
		return *this;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > 5)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else if (this->isSigned() == false)
		{
			std::cout << "Cannot exec form is not signed" << std::endl;
		}
		else
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream& operator<<( std::ostream& o, const PresidentialPardonForm& rhs )
{
	o << rhs.getName() << ", PresidentialPardonForm grade to sign : " << rhs.getGradeS() << " || grade to exec : " << rhs.getGradeE() << "|| is signed : " << rhs.isSigned();
	return o;
}

