#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <stdlib.h>
template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return (this->c.begin());};
		iterator end() {return (this->c.end());};
};

#endif
