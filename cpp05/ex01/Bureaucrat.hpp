/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:03:14 by jlarue            #+#    #+#             */
/*   Updated: 2023/12/18 13:38:03 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

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

		void    signForm( Form& form );

    	class GradeTooHighException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return " Grade too high"; }
    	};
    	class GradeTooLowException : public std::exception {
      		public:
            	virtual const char* what() const throw() { return " Grade too low"; }
    	};

};
		std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );
#endif
