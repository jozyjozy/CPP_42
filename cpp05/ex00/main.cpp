/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:59:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 09:34:51 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << "Test grade, from 5 to 0" << std::endl;
		Bureaucrat Bob("Bob", 5);
		while (1)
		{
			std::cout << Bob << std::endl;
			Bob.incrementGrade();
		}
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what() << std::endl;
	}
	try
	{
		std::cout << "\nTest grade, from 145 to 151" << std::endl;
		Bureaucrat Leon("Leon", 145);
		while (1)
		{
			std::cout << Leon << std::endl;
			Leon.decrementGrade();
		}
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what() << std::endl;
	}
	try
	{
		std::cout << "\nTest constructor with a grade = 151" << std::endl;
		Bureaucrat Marley("Marley", 151);
		while (1)
		{
			std::cout << Marley << std::endl;
			Marley.decrementGrade();
		}
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what() << std::endl;
	}
	try
	{
		std::cout << "\nTest build under 0" << std::endl;
		Bureaucrat Bato("Bato", -1);
		std::cout << Bato << std::endl;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what() << std::endl;
	}
	try
	{
		std::cout << "\nTest build whitout args" << std::endl;
		Bureaucrat nobody;
		std::cout << nobody << std::endl;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what() << std::endl;
	}
	return (0);
}
