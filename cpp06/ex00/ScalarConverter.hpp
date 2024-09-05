/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:38 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/08 11:06:28 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <string>
# include <cstring>

class	ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& src);

    public:
		ScalarConverter &operator=(const ScalarConverter& src);

		static void			convert(std::string str);
		static std::string	findType(std::string str);

};
		std::ostream	&operator<<(std::ostream &o, ScalarConverter *a);
#endif
