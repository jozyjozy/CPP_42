/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:55:09 by jlarue            #+#    #+#             */
/*   Updated: 2023/12/18 13:45:59 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : _name("Form 404"), _signed(0), _gradeToSign(150), _gradeToExec(150)
{
}

Form::Form( const std::string& name, int gradeToS, int gradeToE) : _name(name), _signed(0), _gradeToSign(gradeToS), _gradeToExec(gradeToE)
{
	if (gradeToS <= 0)
	{
		std::cout << this->getName();
		throw Form::GradeTooHighException();
	}
	if (gradeToS >= 151)
	{
		std::cout << this->getName();
		throw Form::GradeTooLowException();
	}
	if (gradeToE <= 0)
	{
		std::cout << this->getName();
		throw Form::GradeTooHighException();
	}
	if (gradeToE >= 151)
	{
		std::cout << this->getName();
		throw Form::GradeTooLowException();
	}
}

Form::Form( const Form& src ) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
}

Form::~Form() {
}

Form& Form::operator=( const Form& rhs ) {
	if ( this != &rhs )
	{
		_signed = rhs.isSigned();
	}
	return *this;
}

std::string Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getGradeS() const {
	return _gradeToSign;
}

int Form::getGradeE() const {
	return _gradeToExec;
}

void	Form::beSigned(Bureaucrat him)
{
	if (him.getGrade() <= _gradeToSign)
		_signed = 1;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<( std::ostream& o, const Form& rhs )
{
	o << rhs.getName() << ", Form grade to sign : " << rhs.getGradeS() << " || grade to exec : " << rhs.getGradeE();
	return o;
}
