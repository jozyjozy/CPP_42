#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <stdlib.h>
#include <stack>
#include <fstream>
#include <iostream>
#include <cstring>

class rpn
{
	private:
	public:
		rpn();
		~rpn();
		rpn(const rpn &cpy);
		rpn &operator=(const rpn &cpy);
		int	_value;
		std::stack<int> _content;
		int checkNotation(char *str);
		int checkIncorrect(char *str);
};

#endif
