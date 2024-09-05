/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
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
template <typename T>
std::string easyfind(std::vector<T> array,T tofind)
{
	typename std::vector<T>::iterator hit;
	hit = std::find(array.begin(), array.end(), tofind);
	if (hit != array.end())
		return ("Yes found");
	return ("Not found");
}
#endif
