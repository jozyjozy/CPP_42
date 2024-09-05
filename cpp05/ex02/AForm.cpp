/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:55:09 by jlarue            #+#    #+#             */
/*   Updated: 2023/12/18 13:45:59 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : _name("AForm 404"), _signed(0), _gradeToSign(150), _gradeToExec(150)
{
}

AForm::AForm( const std::string& name, int gradeToS, int gradeToE) : _name(name), _signed(0), _gradeToSign(gradeToS), _gradeToExec(gradeToE)
{
	if (gradeToS <= 0)
	{
		std::cout << this->getName();
		throw AForm::GradeTooHighException();
	}
	if (gradeToS >= 151)
	{
		std::cout << this->getName();
		throw AForm::GradeTooLowException();
	}
	if (gradeToE <= 0)
	{
		std::cout << this->getName();
		throw AForm::GradeTooHighException();
	}
	if (gradeToE >= 151)
	{
		std::cout << this->getName();
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm( const AForm& src ) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
}

AForm::~AForm() {
}

AForm& AForm::operator=( const AForm& rhs ) {
	if ( this != &rhs )
	{
		_signed = rhs.isSigned();
	}
	return *this;
}

std::string AForm::getName() const {
	return _name;
}

bool AForm::isSigned() const {
	return _signed;
}

int AForm::getGradeS() const {
	return _gradeToSign;
}

int AForm::getGradeE() const {
	return _gradeToExec;
}

void	AForm::beSigned(Bureaucrat him)
{
	try
	{
		if (him.getGrade() <= _gradeToSign)
			_signed = 1;
		else
			throw AForm::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& o, const AForm& rhs )
{
	o << rhs.getName() << ", AForm grade to sign : " << rhs.getGradeS() << " || grade to exec : " << rhs.getGradeE();
	return o;
}
