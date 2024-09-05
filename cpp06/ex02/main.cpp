/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:33 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/08 12:21:16 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(int ac, char **av)
{
	Base *tmp;

	tmp = Base::generate();
	Base::identify(tmp);
	Base::identify(*tmp);
	delete tmp;
}
