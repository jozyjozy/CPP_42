/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:41:47 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/02 16:47:30 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	// crea string init a la valeur demandee
	std::string str = "HI THIS IS BRAIN";
	// le pointeur vers str
	std::string *stringPTR = &str;
	// la reference str
	std::string	&stringREF = str;
	//liste de comment on trouve l'adresse de la string
	std::cout << std::endl;
	std::cout << "valeur de &str: " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "valeur de &stringREF: " << &stringREF << std::endl;
	// Valeur de la string
	std::cout << "\n" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	std::cout << std::endl;
	return (0);
}
