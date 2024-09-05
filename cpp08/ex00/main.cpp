/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:51:50 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/10 13:13:08 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main(int ac, char **av)
{
	srand(time(0));
	if (ac != 2)
	{
		std::cout << "enter the size of the vector as av[1]" << std::endl;
		return -1;
	}

	int num = atoi(av[1]);
    std::vector <int> myarray;
	int i = 0;
	while (i < num)
	{
		myarray.push_back(rand() % 100);
		std::cout << myarray[i] << " ";
		i++;
	}
	std::cout << std::endl;
	std::cout << "45 has been found in myarray ? " << easyfind(myarray, 45) << std::endl;
	std::cout << "46 has been found in myarray ? " << easyfind(myarray, 46) << std::endl;
	std::cout << "47 has been found in myarray ? " << easyfind(myarray, 47) << std::endl;
	std::cout << "48 has been found in myarray ? " << easyfind(myarray, 48) << std::endl;
	std::cout << "49 has been found in myarray ? " << easyfind(myarray, 49) << std::endl;
	std::cout << "50 has been found in myarray ? " << easyfind(myarray, 50) << std::endl;

}
