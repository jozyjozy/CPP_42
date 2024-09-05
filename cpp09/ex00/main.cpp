#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	btcEx X;
	if (ac != 2)
	{
		std::cout << "program needs a file" << std::endl;
		return -1;
	}
	std::string tmp(av[1]);
	std::ifstream str(tmp.c_str());
	if (!str.is_open())
	{
		std::cout << "Cannot open the file, check the name && access rights to it" << std::endl;
		return -1;
	}
	std::string						line;
	int								start;
	int								end;
	getline(str, line);
	while (getline(str, line))
	{
		start = line.find_first_not_of('|', 0);
		end = line.find('|', start);
		if (btcEx::check_date(line.substr(start, end - 1 - start)) == -1)
			std::cout << "Error: bad input => " << line.substr(start, end - 1 - start) << std::endl;
		else if (atof(&line[end + 1]) < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (atof(&line[end + 1]) >= 2147483648)
			std::cout << "Error: too large a number." << std::endl;
		else
			std::cout << line.substr(start, end - 1 - start) << " => " << atof(&line[end + 1]) << " = " << X.findValue(line.substr(start, end - 1 - start), atof(&line[end + 1])) << std::endl;
	}

}
