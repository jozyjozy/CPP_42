/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:02:23 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 14:12:13 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Mr No one"), _grade(150)
{

}

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name(name), _grade(grade) {
	if (grade <= 0)
	{
		std::cout << this->getName();
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade >= 151)
	{
		std::cout << this->getName();
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _name(src._name), _grade(src._grade) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs ) {
	if ( this != &rhs )
		_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void    Bureaucrat::incrementGrade() {
    if ( _grade - 1 < 1 )
	{
		std::cout << this->getName();
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	if ( _grade + 1 > 150 )
	{
		std::cout << this->getName();
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
}

void    Bureaucrat::signForm( AForm& form ) {
	try
	{
        form.beSigned( *this );
		if (form.isSigned() == 1)
			std::cout << *this << " signed " << form.getName() << std::endl;
    }
	catch (AForm::GradeTooLowException &e)
	{
        std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

void Bureaucrat::executeForm(AForm &form) const
{
	form.execute(*this);
}
