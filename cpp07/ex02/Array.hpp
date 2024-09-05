/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:15:27 by jozy              #+#    #+#             */
/*   Updated: 2024/01/10 11:39:26 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *_array;

public:
	Array();
	Array(unsigned int size);
	virtual ~Array();
	Array(const Array<T> &src);
	Array &operator=(const Array &src);
	T &operator[](unsigned int index);
	unsigned int size() const;

	class BadIndex : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

template <typename T>
Array<T>::Array(void) : _size(0)
{
	this->_array = new T[this->_size];
	std::cout << "Default constructor called" << std::cout;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	this->_array = new T[this->_size];
	std::cout << "Constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	unsigned int i = 0;
	if (this->_array)
		delete[] this->_array;
	if (src.size() > 0)
	{
		this->_size = src.size();
		this->_array = new T[this->_size];
		while (i < this->_size)
		{
			this->_array[i] = src._array[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
Array<T>::Array(const Array<T> &src) : _size(src.size())
{
	unsigned int i = 0;
	this->_array = new T[this->_size];
	while (i < this->_size)
	{
		this->_array[i] = src._array[i];
		i++;
	}
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size || this->_array == NULL)
		throw BadIndex();
	return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::BadIndex::what() const throw()
{
	return ("Error : out of bound");
}

#endif
