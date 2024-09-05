#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <iostream>
#include <cstring>

class btcEx
{
	private:
	public:
		btcEx();
		~btcEx();
		btcEx(const btcEx &cpy);
		btcEx &operator=(const btcEx &cpy);
		void parseCsv(std::string str);
		std::map<std::string, float> _content;
		static int	check_date(std::string date);
		float		findValue(std::string date, float investmentValue);
};

#endif
