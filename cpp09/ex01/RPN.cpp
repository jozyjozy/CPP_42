#include "RPN.hpp"

rpn::rpn()
{
	std::cout << "rpn default constructor called" << std::endl;
}

rpn::~rpn()
{
	std::cout << "rpn destructor called" << std::endl;
}

rpn::rpn(const rpn &cpy)
{
		*this = cpy;
}

rpn& rpn::operator=(const rpn &cpy)
{
	if (this != &cpy)
	{
		*this = cpy;
	}
	return *this;
}

int	rpn::checkIncorrect(char *str)
{
	int i = 0;
	int signC = 0;
	int digitC = 0;

	while (str[i])
	{
		if (isdigit(str[i]) && atoi(&str[i]) <= 9  && atoi(&str[i]) > 0)
			digitC++;
		else if (isdigit(str[i]) && (atoi(&str[i]) > 9  || atoi(&str[i]) < 0))
			return (1);
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			signC++;
		i++;
	}
	if (digitC <= signC)
		return (1);
	return (0);
}

int	rpn::checkNotation(char *str)
{
	if (checkIncorrect(str) == 1)
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	while (*str == ' ')
		str++;
	if (!isdigit(*str))
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	while (*str)
	{
		char	c = *str;
		if (isdigit(c))
			this->_content.push(c - '0');
		else if (c == ' ')
		{
			str++;
			continue;
		}
		else if (!isdigit(c) && c != '+' && c != '-' && c != '*' && c != '/')
		{
			std::cout << "Error" << std::endl;
			return (-1);
		}
		else
		{
			if (this->_content.size() < 2)
			{
				std::cout << "Error" << std::endl;
				return (-1);
			}
			int x2 = this->_content.top();
			this->_content.pop();
			int x1 = this->_content.top();
			this->_content.pop();
			if (c == '+')
				this->_content.push(x1 + x2);
			else if (c == '-')
				this->_content.push(x1 - x2);
			else if (c == '*')
				this->_content.push(x1 * x2);
			else if (c == '/')
			{
				if (x2 == 0)
				{
					std::cout << "Error" << std::endl;
					return (-1);
				}
				else
					this->_content.push(x1 / x2);
			}
			else
			{
				std::cout << "Error" << c << std::endl;
				return (-1);
			}
		}
		str++;
	}
	if (this->_content.size() <= 1)
		this->_value = this->_content.top();
	else
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	return 1;
}
