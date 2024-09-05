/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:07:35 by jlarue            #+#    #+#             */
/*   Updated: 2023/12/18 13:37:48 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
		const std::string 	_name;
        bool         		_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;


    public:
        Form();
		Form(const std::string& name, int gradeToS, int gradeToE);
        Form(const Form& src);
        ~Form();

        Form &operator=(const Form& rhs);

		int			getGradeS() const;
		int			getGradeE() const;
		bool 		isSigned() const;
		std::string getName() const;

		void		beSigned(Bureaucrat him);
		//void    signForm();

    	class GradeTooHighException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return " Grade too high"; }
    	};
    	class GradeTooLowException : public std::exception {
      		public:
            	virtual const char* what() const throw() { return " Grade too low"; }
    	};

};
		std::ostream&   operator<<( std::ostream& o, const Form& rhs );
#endif
