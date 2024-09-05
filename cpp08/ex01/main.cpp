/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:51:50 by jlarue            #+#    #+#             */
/*   Updated: 2024/02/19 14:28:57 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	Span sp = Span(3);
	std::cout << "we had numbers in sp ONE BY ONE" << std::endl;
	try {sp.addNumber(255);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {sp.addNumber(404);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {sp.addNumber(007);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "the object of size 3 has 3 values, we shouldnt be able to add another member" << std::endl;
	try {sp.addNumber(157);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {std::cout << "longest distance in sp = " << sp.longestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {std::cout << "shortest distance in sp = " << sp.shortestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp2 = Span(3);
	std::cout << "we had numbers in sp2, filling it all at once with sp" << std::endl;
	try {sp2.addNNumber(sp._stock.begin(), sp._stock.end());}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	unsigned j = 0;
	while (j < sp2._stock.size() - 1)
	{
		std::cout << "sp2[" << j << "] = "<< sp2._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	std::cout << std::endl;
	Span sp3 = Span(1);
	std::cout << "we try to display the shortest distance in a vector of _size = 1 " << std::endl;
	try {std::cout << sp3.shortestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "we create a sp of size 100 and fill it with a while loop" << std::endl;
	Span sp4 = Span(100);
	j = 0;
	while (j < sp4._size)
	{
		try {sp4.addNumber(rand() % 100);}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		j++;
	}

	std::cout << "let's display sp4 :" << std::endl;
	j = 0;
	while (j < sp4._stock.size())
	{
		std::cout << "sp4[" << j << "] = "<< sp4._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	std::cout << std::endl;

	Span sp5 = Span(100);
	std::cout << "we bulk import sp5 in sp5, another object of size 100, should do nothing" << std::endl;
	try {sp5.addNNumber(sp5._stock.begin(), sp5._stock.end());}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "let's display sp5 :" << std::endl;
	j = 0;
	while (j < sp5._stock.size())
	{
		std::cout << "sp5[" << j << "] = "<< sp5._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	std::cout << std::endl;
	std::cout << "we bulk import sp4 in sp5, another object of size 100, should do the copy paste we dreamed of" << std::endl;
	try {sp5.addNNumber(sp4._stock.begin(), sp4._stock.end());}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "let's display sp5 :" << std::endl;
	j = 0;
	while (j < sp5._stock.size())
	{
		std::cout << "sp5[" << j << "] = "<< sp5._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	std::cout << std::endl;

	Span sp6 = Span(100000);
	std::cout << "We import 100 000 random values in sp6, another object of size 100 000, should do nothing" << std::endl;
	j = 0;
	while (j < sp6._size - 1)
	{
		try {sp6.addNumber(rand() % 100);}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		j++;
	}
	std::cout << "we bulk import sp6 in sp6, another object of size 100 000, should do nothing" << std::endl;
	try {sp6.addNNumber(sp6._stock.begin(), sp6._stock.end());}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "let's display sp6 (10 first and last values):" << std::endl;
	j = 0;
	while (j < 10)
	{
		std::cout << "sp6[" << j << "] = "<< sp6._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	j = 99989;
	while (j < 100000)
	{
		std::cout << "sp6[" << j << "] = "<< sp6._stock[j] << " ";
		if (((j + 1) % 6) == 0)
			std::cout << std::endl;
		j++;
	}
	std::cout << std::endl;
	try {std::cout << "shortest distance in sp6 = " << sp6.shortestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {std::cout << "longest distance in sp6 = " << sp6.longestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp7 = Span(1);
	std::cout << "We import 1 random values in sp7, another object of size 1, should do nothing" << std::endl;
	try {sp7.addNumber(rand() % 100);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "We import a second random values in sp7, another object of size 1, should print an exception" << std::endl;
	try {sp7.addNumber(rand() % 100);}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "We search the longest the shortest distance in a span of size 1, should print an exception" << std::endl;
	try {std::cout << sp7.longestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {std::cout << sp7.shortestSpan() << std::endl;}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

