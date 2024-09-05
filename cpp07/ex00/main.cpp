/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:08:01 by jlarue            #+#    #+#             */
/*   Updated: 2024/02/19 11:47:11 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
/*
class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome & operator=(Awesome & a) {_n = a._n; return *this;}
		bool operator==(Awesome const & rhs) const {return(this->_n == rhs._n);}
		bool operator!=(Awesome const & rhs) const {return(this->_n != rhs._n);}
		bool operator>(Awesome const & rhs) const {return(this->_n > rhs._n);}
		bool operator<(Awesome const & rhs) const {return(this->_n < rhs._n);}
		bool operator>=(Awesome const & rhs) const {return(this->_n >= rhs._n);}
		bool operator<=(Awesome const & rhs) const {return(this->_n <= rhs._n);}
		int get_n() const {return _n;}
		private :
		int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) {o<<a.get_n(); return o;}
*/
int main(void)
{
	/*Awesome a(2), b(4);

	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;*/
	int c = 2;
	int d = 3;
	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::string e = "chaine1";
	std::string f = "chaine2";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
}
