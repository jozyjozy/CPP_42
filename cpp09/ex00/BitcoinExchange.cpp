# include "BitcoinExchange.hpp"

btcEx::btcEx()
{
	this->parseCsv("data.csv");
	std::cout << "btcEx default constructor called" << std::endl;
}

btcEx::~btcEx()
{
	std::cout << "btcEx destructor called" << std::endl;
}

btcEx::btcEx(const btcEx &cpy)
{
		*this = cpy;
}

btcEx& btcEx::operator=(const btcEx &cpy)
{
	if (this != &cpy)
	{
		*this = cpy;
	}
	return *this;
}

void btcEx::parseCsv(std::string str)
{
	std::ifstream infile(str.c_str());
	if (!infile.is_open())
	{
		std::cout << "Cannot open the file, check the name && access rights to it" << std::endl;
		return ;
	}
	std::string					key;
	std::string					line;
	int							start;
	int							end;

	while (getline(infile, line))
	{
		start = line.find_first_not_of(',', 0);
		end = line.find(',', start);
		this->_content[line.substr(start, end - start)] = atof(&line[end + 1]);
	}
	infile.close();
}

int	btcEx::check_date(std::string date)
{
	int	year;
	int	month;
	int	day;
	int Nbday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int Bday[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

	year = atoi(&date[0]);
	if (year < 1)
		return (-1);
	month = atoi(&date[5]);
	if (month < 1 || month > 12)
		return (-1);
	day = atoi(&date[8]);
	if (year % 4 == 0)
	{
		if (day > Bday[month - 1])
			return (-1);
	}
	else
	{
		if (day > Nbday[month - 1])
			return (-1);
	}
	return (1);
}

float	btcEx::findValue(std::string date, float x)
{
	int	year;
	int	month;
	int	day;
	year = atoi(&date[0]);
	month = atoi(&date[5]);
	day = atoi(&date[8]);

	if (year < 2009 || (year <= 2009 && day < 2 && month == 1))
		return (0);
 	std::map<std::string, float>::iterator i;
	i = this->_content.lower_bound(date);
	if (this->_content.count(date) == 0)
		i--;
	return (i->second * x);
}
