# include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout << "need to provide a number sequence" << std::endl;
        return 1;
    }
    PmergeMe    sorted(av);
    return 0;
}
