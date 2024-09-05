/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:07:35 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 13:45:23 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define ROUGE "\001\033[1;91m\002"
# define WHITE "\033[0;37m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
		const std::string 	_name;
        bool         		_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;


    public:
        AForm();
		AForm(const std::string& name, int gradeToS, int gradeToE);
        AForm(const AForm& src);
        virtual ~AForm() = 0;

        AForm &operator=(const AForm& rhs);

		int			getGradeS() const;
		int			getGradeE() const;
		bool 		isSigned() const;
		std::string getName() const;

		void		beSigned(Bureaucrat him);
		//void    signForm();

		virtual void execute(Bureaucrat const &executor)const = 0;

    	class GradeTooHighException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return " Grade too high"; }
    	};
    	class GradeTooLowException : public std::exception {
      		public:
            	virtual const char* what() const throw() { return " Grade too low"; }
    	};

};
		std::ostream&   operator<<( std::ostream& o, const AForm& rhs );
#endif
