/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:59:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 10:02:38 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 10, 10);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception &exept) {
        std::cout << exept.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 12, 12);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception &exept) {
        std::cout << exept.what() << std::endl;
    }

	Bureaucrat bureaucrat("Joz", 1);
	Form form2("Piscine 2022", 125, 135);
	std::cout << form2 << std::endl;
	std::cout << "test getGradeS() : " << form2.getGradeS() << std::endl;
	std::cout << "test getGradeE() : " << form2.getGradeE() << std::endl;

	std::cout << "----------------" << std::endl;
	std::cout << "test creation unnaceptable form" << std::endl;
	std::cout << "----------------" << std::endl;
    try
	{
		Form form3("F3", 15555, -1541654);
    }
	catch (std::exception &exept)
	{
        std::cout << exept.what() << std::endl;
    }
    try
	{
		Form form4("F4", 100, 151);
    }
	catch (std::exception &exept)
	{
        std::cout << exept.what() << std::endl;
    }
	try
	{
		Form form5("F5", -1, 100);
    }
	catch (std::exception &exept)
	{
        std::cout << exept.what() << std::endl;
    }
	try
	{
		Form form6("F6", 100, -1);
    }
	catch (std::exception &exept)
	{
        std::cout << exept.what() << std::endl;
    }
    return 0;
}
