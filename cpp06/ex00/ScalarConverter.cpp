/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:36 by jlarue            #+#    #+#             */
/*   Updated: 2024/02/17 11:45:06 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <cstring>

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy)
{
	*this = cpy;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& rhs )
{
	return *this;
}

/* type finder : we do not search the accurate type, just if it's a number, a char or not doable */
std::string ScalarConverter::findType(std::string str)
{
	int i;

	i = 0;
	if (str.compare("-inff") == 0 || str.compare("+inff") == 0
		|| str.compare("-inf") == 0 || str.compare("+inf") == 0
		|| str.compare("nan") == 0 || str.compare("nanf") == 0)
		return ("IMPOSSIBLE");
	else if ((!isdigit(str[0])) && str[0] != '-' && str[0] != '+')
		return ("CHAR");
	else
		return("NUM");
}

/* big conversion into displaying them */
void	ScalarConverter::convert(std::string str)
{
	std::string 	type = findType(str);
	char			_char = '\0';
	int			 	_int;
	double			_double;
	float			_float;
	if (type == "CHAR")
	{
		_char = str[0];
		_int = static_cast< int > (str[0]);
		_double = static_cast< double > (_int);
		_float = static_cast< float > (_int);
	}
	else if (type == "NUM")
	{
		 try
    	{
        	_double = std::stod(str);
        	_int = static_cast< int >( _double );
        	_float = static_cast< float >( _double );
        	_char = static_cast< char >( _double );
		}
		catch ( std::exception& e )
    	{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible"<< std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double : impossible" << std::endl;
			return ;
		}
	}
	else
	{
		if (str.compare("-inff") == 0 || str.compare("-inf") == 0 )
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible"<< std::endl;
			std::cout << "float : -inff" << std::endl;
			std::cout << "double : -inf" << std::endl;
			return ;
		}
		if (str.compare("+inff") == 0 || str.compare("+inf") == 0 )
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible"<< std::endl;
			std::cout << "float : +inff" << std::endl;
			std::cout << "double : +inf" << std::endl;
			return ;
		}
		if (str.compare("nan") == 0 || str.compare("nanf") == 0 )
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible"<< std::endl;
			std::cout << "float : nanf" << std::endl;
			std::cout << "double : nan" << std::endl;
			return ;
		}
	}
	if (isprint(_char))
		std::cout << "char : " << "'" << _char << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (_int == -2147483648 && _double != -2147483648)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << _int << std::endl;
	int i = 0;
	int postcomma = 1;
	while (str[i + postcomma])
	{
		if (str[i] == '.')
		{
			while (str[i + postcomma] && isdigit(str[i + postcomma]))
				postcomma++;
		}
		i++;
	}
	if (postcomma > 1)
		std::cout.precision(postcomma - 1);
	else
		std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
	std::cout << "float : " << _float << "f" << std::endl;
	std::cout << "double : " << _double << std::endl;
	return ;
}
