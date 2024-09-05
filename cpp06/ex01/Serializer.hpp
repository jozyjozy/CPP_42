/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:38 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/08 11:27:52 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cctype>
# include <string>
# include <cstring>

typedef struct Data
{
	int nb;
}	Data;

class	Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& src);

    public:
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
		Serializer 			&operator=(const Serializer& src);

};
		std::ostream	&operator<<(std::ostream &o, Serializer *a);
#endif
