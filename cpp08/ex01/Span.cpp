/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:34:20 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/11 14:39:26 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span()
{
	std::cout << "Default Span constructor called" << std::endl;
}

Span::Span(unsigned int size) : _size(size)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span &cpy)
{
	if (this != &cpy)
	{
		_size = cpy._size;
		unsigned int i = 0;
		while (i < _size)
		{
			_stock[i] = cpy._stock[i];
			i++;
		}
	}
}

Span& Span::operator=( const Span& cpy )
{
	if ( this != &cpy )
	{
		_size = cpy._size;
		unsigned int i = 0;
		while (i < _size)
		{
			_stock[i] = cpy._stock[i];
			i++;
		}
	}
	return *this;
}

void Span::addNumber(int toAdd)
{
	if ((unsigned int)(_stock.size()) >= _size)
		throw Span::alreadyFull();
	else
		_stock.push_back(toAdd);
}

int Span::longestSpan(void)
{
	if ((unsigned int)(_stock.size()) < 2)
		throw Span::noOrOneNumber();
	int min = _stock[0];
	int max = _stock[0];
	unsigned int j = 0;
	while (j < _size)
	{
		min = std::min(_stock[j], min);
		max = std::max(_stock[j], max);
		j++;
	}
	return (max - min);
}

int Span::shortestSpan(void)
{
	if ((unsigned int)(_stock.size()) < 2)
		throw Span::noOrOneNumber();
	unsigned int	j = 0;
	int 			min = std::min(_stock[0], _stock[1]);
	int				max = std::max(_stock[0], _stock[1]);
	int				distance = max - min;
	std::sort(_stock.begin(), _stock.end());
	while (j < _size - 1)
	{
		if (distance > (abs(_stock[j] - _stock[j + 1])))
			distance = abs(_stock[j] - _stock[j + 1]);
		j++;
	}
	return (distance);
}

void Span::addNNumber(std::vector<int>::iterator Begin, std::vector<int>::iterator End)
{
	if (_stock.size() >= _size)
		throw Span::alreadyFull();
	else
	{
		_stock.insert(_stock.end(), Begin, End);
	}
}
