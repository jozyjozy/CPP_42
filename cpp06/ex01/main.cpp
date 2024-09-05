/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:33 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/08 11:30:22 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int ac, char **av)
{
	Data	test;
	uintptr_t tmp;

	test.nb = 42;
	std::cout << test.nb << std::endl;
	tmp = Serializer::serialize(&test);
	test = *Serializer::deserialize(tmp);
	std::cout << test.nb << std::endl;
}
