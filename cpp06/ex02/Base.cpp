/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:36 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/08 12:25:29 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base(void)
{
}

Base *Base::generate(void)
{
	int	i;

	srand(time(NULL));
	i = rand();
	if (i % 3 == 0)
		return (new A);
	else if (i % 2 == 0)
		return (new B);
	else
		return (new C);
}

void	Base::identify(Base* p)
{
	{
		A *test = dynamic_cast<A*>(p);
		if (test)
			std::cout << "A" << std::endl;
		(void) test;
	}
	{
		B *test = dynamic_cast<B*>(p);
		if (test)
			std::cout << "B" << std::endl;
		(void) test;
	}
	{
		C *test = dynamic_cast<C*>(p);
		if (test)
			std::cout << "C" << std::endl;
		(void) test;
	}
}

void	Base::identify(Base& p)
{
	{
		try
		{
			A test = dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
		}
		catch(std::bad_cast)
		{
		}
	}
	{
		try
		{
			B test = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(std::bad_cast)
		{
		}
	}
	{
		try
		{
			C test = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
		}
		catch(std::bad_cast)
		{
		}
	}
}
