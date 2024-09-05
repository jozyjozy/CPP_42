/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:11:36 by jlarue            #+#    #+#             */
/*   Updated: 2023/08/03 16:45:23 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde = new Zombie[N];

	i = 0;
	while (i != N)
	{
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	return (&(horde[0]));
}
