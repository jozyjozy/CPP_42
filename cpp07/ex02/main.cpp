#include "Array.hpp"
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    Array<int> num(500);
    Array<int> num2(500);
    Array<int> num3(0);

	try
	{
		std::cout << "num3[" << "i"<< "] = " << num3[0] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
    int i = 0;
    while (i < 500)
    {
		try
		{
			std::cout << "num2[" << i << "] = " << num2[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() <<std::endl;
		}
        i++;
    }

	i = 0;
    while (i < 500)
    {
        int value = rand();
        try
		{
			num[i] = value;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() <<std::endl;
		}
        i++;
    }
    i = 0;
    while (i < 500)
    {
		try
		{
			std::cout << "num[" << i << "] = " << num[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() <<std::endl;
		}
        i++;
    }
	try
	{
		std::cout << num[510] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}

    Array<char> chara(26);

	i = 0;
	int c = 'a';
    while (i < 26)
    {
        try
		{
			chara[i] = c;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() <<std::endl;
		}
        c++;
		i++;
    }
    i = 0;
    while (i < 26)
    {
		try
		{
			std::cout << "chara[" << i<< "] = " << chara[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() <<std::endl;
		}
        i++;
    }
	try
	{
		std::cout << chara[28] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
}
