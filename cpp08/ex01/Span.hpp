/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:51:54 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/10 13:20:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include<iterator>

class	Span
{
	private:
	public:
		unsigned int		_size;
		std::vector<int> 	_stock;
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &cpy);
		Span &operator=(const Span &cpy);

		void addNumber(int toAdd);

		int shortestSpan(void);
		int longestSpan(void);

		void addNNumber(std::vector<int>::iterator Begin, std::vector<int>::iterator End);

		class alreadyFull : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Object already full"; }
		};
		class noOrOneNumber : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Object contains one of 0 number, calculating the distance is not possible"; }
		};
};
#endif
