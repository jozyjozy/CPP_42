/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:03:14 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 13:41:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		const std::string 	_name;
        int         		_grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat& rhs);

        int			getGrade() const;
        std::string	getName() const;

		void    incrementGrade();
		void    decrementGrade();

		void    signForm( AForm& form );

		void executeForm(AForm &form) const;

    	class GradeTooHighException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return " Grade too high "; }
    	};
    	class GradeTooLowException : public std::exception {
      		public:
            	virtual const char* what() const throw() { return " Grade too low "; }
    	};

};
		std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );
#endif
