/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:08:01 by jlarue            #+#    #+#             */
/*   Updated: 2024/02/19 11:52:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void TheThingPlusPlus(char &x)
{
	x++;
}
void TheThingPrintPrint(char &x)
{
	std::cout << x << std::endl;
}
void TheThingMinusMinus(char &x)
{
	x--;
}
/*
class Awesome
{
	public:
		Awesome(void) : _n(42) {}
		int get(void) const {return this->_n;}
		private :
		int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) {o<<a.get(); return o;}
template<typename T>
void print(T const &x) {std::cout  << x << std::endl; return ;}
*/

int main(int ac, char **av)
{
/*
	int tab[] = {0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
*/
	if (ac != 2)
	{
		std::cout << "need av[1]" << std::endl;
		return (-1);
	}
	int j = strlen(av[1]);
	std::cout << "avant : " << av[1] << std::endl;
	::iter(av[1], j, TheThingPlusPlus);
	std::cout << "apres ++ : " << av[1] << std::endl;
	std::cout << "avant : " << av[1] << std::endl;
	::iter(av[1], j, TheThingMinusMinus);
	std::cout << "apres -- : " << av[1] << std::endl;
	::iter(av[1], j, TheThingPrintPrint);
	return (0);
}

