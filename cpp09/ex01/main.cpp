#include "RPN.hpp"

int main(int ac, char **av)
{
	rpn		x;
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	if (x.checkNotation(av[1]) == -1)
		return (-1);
	std::cout << x._value << std::endl;
}
